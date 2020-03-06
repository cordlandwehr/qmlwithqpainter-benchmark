/*
    SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
    SPDX-License-Identifier: MIT
*/

import QtQuick 2.12
import QtQuick.Window 2.12
import Experiment 1.0

Window {
    visible: true
    width: 1000
    height: 1000
    title: "Test"
    Rectangle {
        anchors.centerIn: parent
        color: "blue"
        width: 640
        height: width
        PainterItem {
            anchors.fill: parent
        }
    }
}
