//
// PROJECT:         Aspia
// FILE:            console/computer_dialog.h
// LICENSE:         GNU General Public License 3
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_CONSOLE__COMPUTER_DIALOG_H
#define _ASPIA_CONSOLE__COMPUTER_DIALOG_H

#include "protocol/address_book.pb.h"
#include "ui_computer_dialog.h"

namespace aspia {

class ComputerGroupItem;

class ComputerDialog : public QDialog
{
    Q_OBJECT

public:
    ComputerDialog(QWidget* parent,
                   proto::Computer* computer,
                   proto::ComputerGroup* parent_computer_group);
    ~ComputerDialog();

private slots:
    void sessionTypeChanged(int item_index);
    void showPasswordButtonToggled(bool checked);
    void sessionConfigButtonPressed();
    void buttonBoxClicked(QAbstractButton* button);

private:
    void showError(const QString& message);

    Ui::ComputerDialog ui;
    proto::Computer* computer_;

    Q_DISABLE_COPY(ComputerDialog)
};

} // namespace aspia

#endif // _ASPIA_CONSOLE__COMPUTER_DIALOG_H