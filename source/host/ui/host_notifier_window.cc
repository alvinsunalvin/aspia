//
// PROJECT:         Aspia
// FILE:            host/host_notifier_window.cc
// LICENSE:         GNU General Public License 3
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "host/ui/host_notifier_window.h"

#include <QDebug>
#include <QDir>
#include <QMouseEvent>
#include <QScreen>
#include <QTranslator>

#include "host/host_settings.h"

namespace aspia {

namespace {

QHash<QString, QStringList> createLocaleList()
{
    QString translations_dir =
        QApplication::applicationDirPath() + QStringLiteral("/translations/");

    QHash<QString, QStringList> locale_list;

    QStringList qm_file_list = QDir(translations_dir).entryList(QStringList() << "*.qm");
    QRegExp regexp(QStringLiteral("([a-zA-Z0-9-_]+)_([^.]*).qm"));

    for (const auto& qm_file : qm_file_list)
    {
        if (regexp.exactMatch(qm_file))
        {
            QString locale_name = regexp.cap(2);

            if (locale_list.contains(locale_name))
                locale_list[locale_name].push_back(qm_file);
            else
                locale_list.insert(locale_name, QStringList() << qm_file);
        }
    }

    return locale_list;
}

} // namespace

HostNotifierWindow::HostNotifierWindow(QWidget* parent)
    : QWidget(parent, Qt::SplashScreen)
{
    HostSettings settings;

    QString current_locale = settings.locale();

    QHash<QString, QStringList> locale_list = createLocaleList();
    if (locale_list.constFind(current_locale) == locale_list.constEnd())
    {
        current_locale = HostSettings::defaultLocale();
        settings.setLocale(current_locale);
    }

    installTranslators(locale_list[current_locale]);
    ui.setupUi(this);

    ui.label_title->installEventFilter(this);
    ui.label_connections->installEventFilter(this);

    connect(ui.button_show_hide, &QPushButton::pressed,
            this, &HostNotifierWindow::onShowHidePressed);

    connect(ui.button_disconnect_all, &QPushButton::pressed, [this]()
    {
        close();
        QApplication::quit();
    });

    setAttribute(Qt::WA_ShowWithoutActivating);
    setAttribute(Qt::WA_TranslucentBackground);
}

HostNotifierWindow::~HostNotifierWindow()
{
    for (auto translator : translator_list_)
    {
        QApplication::removeTranslator(translator);
        delete translator;
    }
}

bool HostNotifierWindow::eventFilter(QObject* object, QEvent* event)
{
    if (object == ui.label_title || object == ui.label_connections)
    {
        switch (event->type())
        {
            case QEvent::MouseButtonPress:
            {
                QMouseEvent* mouse_event = dynamic_cast<QMouseEvent*>(event);
                if (mouse_event && mouse_event->button() == Qt::LeftButton)
                {
                    start_pos_ = mouse_event->pos();
                    return true;
                }
            }
            break;

            case QEvent::MouseMove:
            {
                QMouseEvent* mouse_event = dynamic_cast<QMouseEvent*>(event);
                if (mouse_event && mouse_event->buttons() & Qt::LeftButton && start_pos_.x() >= 0)
                {
                    QPoint diff = mouse_event->pos() - start_pos_;
                    move(pos() + diff);
                    return true;
                }
            }
            break;

            case QEvent::MouseButtonRelease:
            {
                start_pos_ = QPoint(-1, -1);
            }
            break;

            default:
                break;
        }
    }

    return QWidget::eventFilter(object, event);
}

void HostNotifierWindow::onShowHidePressed()
{
    if (ui.content->isVisible())
    {
        QSize screen_size = QApplication::primaryScreen()->availableSize();
        QSize content_size = ui.content->frameSize();
        window_rect_ = frameGeometry();

        ui.content->hide();

        move(screen_size.width() - ui.button_show_hide->width(), pos().y());
        setFixedSize(window_rect_.width() - content_size.width(),
                     window_rect_.height());

        ui.button_show_hide->setIcon(QIcon(QStringLiteral(":/icon/arrow-right-gray.png")));
    }
    else
    {
        ui.content->show();

        move(window_rect_.topLeft());
        setFixedSize(window_rect_.size());

        ui.button_show_hide->setIcon(QIcon(QStringLiteral(":/icon/arrow-left-gray.png")));
    }
}

void HostNotifierWindow::installTranslators(const QStringList& file_list)
{
    QString translations_dir =
        QApplication::applicationDirPath() + QStringLiteral("/translations/");

    for (const auto& qm_file : file_list)
    {
        QString qm_file_path = translations_dir + qm_file;

        QTranslator* translator = new QTranslator();

        if (!translator->load(qm_file_path))
        {
            qWarning() << "Translation file not loaded: " << qm_file_path;
            delete translator;
        }
        else
        {
            QApplication::installTranslator(translator);
            translator_list_.push_back(translator);
        }
    }
}

} // namespace aspia