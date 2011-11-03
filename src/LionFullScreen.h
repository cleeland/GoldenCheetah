/*
 * Copyright (c) 2011 Mark Liversedge (liversedge@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

// What versions are supported by this SDK?
#ifdef Q_OS_MAC
#include <AvailabilityMacros.h>
#endif

#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_7
#ifndef _GC_LionFullScreen_h
#define _GC_LionFullScreen_h 1
#include "GoldenCheetah.h"

// QT stuff etc
#include <QtGui>
#include "MainWindow.h"

class LionFullScreen : public QObject
{
    Q_OBJECT;

    public:

        LionFullScreen(MainWindow *main);

        // found in the supplied directory
        void toggle();

    public slots:
        bool eventFilter(QObject *obj, QEvent *event);

    private:
        MainWindow *main;
};

#endif // _GC_LionFullScreen_h
#endif // LION or later
