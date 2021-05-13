#include <QApplication>
#include "ui/ScreenshotUI.hpp"

int main(int argc, char** argv) {
    QApplication a(argc, argv);

    ScreenshotUI ui;

    ui.setFixedSize(431, 194);
    ui.show();

    return QApplication::exec();
}
