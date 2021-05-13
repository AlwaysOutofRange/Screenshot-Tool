//
// Created by nico on 11.05.21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_CaptureImage.h" resolved

#include "CaptureImage.hpp"
#include "ui_CaptureImage.h"
#include "../../headers/Utils.hpp"
#include <QDesktopWidget>
#include <QApplication>
#include <QMouseEvent>
#include <QPainter>
#include <QPainterPath>
#include <QColor>

CaptureImage::CaptureImage(QWidget *parent) : QDialog(parent, Qt::FramelessWindowHint) {
    setAttribute(Qt::WA_TranslucentBackground);
    setGeometry(QApplication::desktop()->geometry());

    desktopPixmap = Utils::grabScreen();
}

CaptureImage::~CaptureImage() {
    delete ui;
}

void CaptureImage::mousePressEvent(QMouseEvent* event) {
    setCursor(Qt::CrossCursor);
    selectRect.setTopLeft(event->pos());
}

void CaptureImage::mouseMoveEvent(QMouseEvent* event) {
    setCursor(Qt::CrossCursor);
    selectRect.setBottomRight(event->pos());
    update();
}

void CaptureImage::mouseReleaseEvent(QMouseEvent*) {
    setCursor(Qt::ArrowCursor);
    selectPixmap = desktopPixmap.copy(selectRect.normalized());
    accept();
}

void CaptureImage::paintEvent(QPaintEvent*) {
    QPainter painter(this);

    painter.drawPixmap(0, 0, desktopPixmap);

    QPainterPath path;
    path.addRect(rect());
    path.addRect(selectRect);
    painter.fillPath(path, QColor::fromRgb(255, 255, 255, 200));
    painter.setPen(Qt::red);
    painter.drawRect(selectRect);
}


