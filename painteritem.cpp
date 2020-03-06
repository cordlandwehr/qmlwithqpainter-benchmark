/*
    SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
    SPDX-License-Identifier: MIT
*/

#include "painteritem.h"
#include <QPainter>
#include <QPen>
#include <QTimer>

PainterItem::PainterItem(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
    setRenderTarget(QQuickPaintedItem::Image);

    // uncomment to enforce rendering directly into the FBO
    //setRenderTarget(QQuickPaintedItem::FramebufferObject);

    // uncomment to
    //setOpaquePainting(true);
    modifyColor();
}

void PainterItem::paint(QPainter *painter)
{
    painter->setPen(QPen(QColor(mRedColorValue, 0, 0), 12, Qt::DashDotLine, Qt::RoundCap));
    painter->drawLine(0, 0, static_cast<int>(width()), static_cast<int>(height()));
}

void PainterItem::modifyColor()
{
    mRedColorValue = (mRedColorValue + 1) % 255;
    update();
    QTimer::singleShot(1, this, &PainterItem::modifyColor);
}
