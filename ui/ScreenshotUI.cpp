//
// Created by nico on 29.04.21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ScreenshotUI.h" resolved

#include "ScreenshotUI.hpp"
#include "ui_ScreenshotUI.h"
#include "../ui/CaptureImage/CaptureImage.hpp"
#include "../headers/Utils.hpp"
#include "../ui/Preview/Preview.hpp"

#include <QClipboard>
#include <QPixmap>
#include <QDialog>
#include <iostream>
#include <QThread>

ScreenshotUI::ScreenshotUI(QWidget *parent) : QWidget(parent), ui(new Ui::ScreenshotUI) {
    ui->setupUi(this);
    setStyleSheet("font: italic 10pt 'MesloLGS NF';");
}

ScreenshotUI::~ScreenshotUI() {
    delete ui;
}

void ScreenshotUI::on_whole_screen_clicked()
{
    hide();
    QThread::sleep(1 + ui->delay->value());
    QPixmap screen = Utils::grabScreen();

    Preview *preview = new Preview;
    preview->setImage(screen);
    close();
    preview->show();
}

void ScreenshotUI::on_select_area_clicked()
{
   hide();
   QThread::sleep(1 + ui->delay->value());
   CaptureImage *image = new CaptureImage;
   Preview *preview = new Preview;

   image->exec();
   if(image->selectPixmap.isNull()) exit(1);

   preview->setImage(image->selectPixmap);
   close();
   preview->show();
}
