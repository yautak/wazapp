/***************************************************************************
**
** Copyright (c) 2012, Tarek Galal <tarek@wazapp.im>
**
** This file is part of Wazapp, an IM application for Meego Harmattan
** platform that allows communication with Whatsapp users.
**
** Wazapp is free software: you can redistribute it and/or modify it under
** the terms of the GNU General Public License as published by the
** Free Software Foundation, either version 2 of the License, or
** (at your option) any later version.
**
** Wazapp is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
** See the GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Wazapp. If not, see http://www.gnu.org/licenses/.
**
****************************************************************************/
#ifndef WAREGREQUEST_H
#define WAREGREQUEST_H

#include "warequest.h"
#include <QDomDocument>

class WARegRequest : public WARequest
{
    Q_OBJECT
public:
    explicit WARegRequest(QString cc, QString number, QString method ="sms");
    
    void run();

signals:
    void success(QString);
    void fail(QString);

public slots:
    void launched();
    void onDone(QString);
    void go(QString);
};

#endif // WAREGREQUEST_H
