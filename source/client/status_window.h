//
// Aspia Project
// Copyright (C) 2020 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef CLIENT__STATUS_WINDOW_H
#define CLIENT__STATUS_WINDOW_H

#include "client/client_authenticator.h"
#include "net/network_error.h"

namespace client {

class StatusWindow
{
public:
    virtual ~StatusWindow() = default;

    virtual void onStarted(const std::u16string& address, uint16_t port) = 0;
    virtual void onStopped() = 0;
    virtual void onConnected() = 0;
    virtual void onDisconnected(net::ErrorCode error_code) = 0;
    virtual void onAccessDenied(Authenticator::ErrorCode error_code) = 0;
};

} // namespace client

#endif // CLIENT__STATUS_WINDOW_H
