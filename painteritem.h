/*
    SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
    SPDX-License-Identifier: MIT
*/

#ifndef PAINTERITEM_H
#define PAINTERITEM_H

#include <QQuickPaintedItem>

class PainterItem : public QQuickPaintedItem
{
    Q_OBJECT

public:
    PainterItem(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;

public Q_SLOT:
    void modifyColor();

Q_SIGNALS:
private:
    int mRedColorValue{ 0 };
};

#endif // PAINTERITEM_H
