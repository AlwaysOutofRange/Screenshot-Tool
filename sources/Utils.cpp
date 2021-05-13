//
// Created by nico on 11.05.21.
//

#include "../headers/Utils.hpp"
#include <QPixmap>
#include <QDesktopWidget>
#include <QApplication>
#include <QPainter>
#include <QScreen>

QPixmap Utils::grabScreen() {
    QPixmap pixMap = QPixmap(QApplication::desktop()->geometry().size());
    QPainter painter(&pixMap);

    for(QScreen* screen : QApplication::screens()) {
        painter.drawPixmap(screen->geometry().topLeft(), screen->grabWindow(0));
    }

    return pixMap;
}
