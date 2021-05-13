#include "Preview.hpp"
#include "ui_Preview.h"

#include <QPixmap>
#include <QClipboard>
#include <QApplication>
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QIODevice>
#include <QMessageBox>
#include <QDataStream>

#define JPEG "JPG files (*.jpg)"
#define PNG "PNG files (*.png)"

Preview::Preview(QWidget *parent) : QWidget(parent), ui(new Ui::Preview)
{
    ui->setupUi(this);
    setFixedSize(476, 218);
    setStyleSheet("font: italic 10pt 'MesloLGS NF';");
}

Preview::~Preview()
{
    delete ui;
}

void Preview::setImage(QPixmap map) {
    orginal = map;

    map.scaled(ui->label->width(), ui->label->height(), Qt::KeepAspectRatio);
    ui->label->setPixmap(map);
}

void Preview::on_okay_clicked()
{
    QString selected;

    if(ui->save->isChecked()) {
        QString name = QFileDialog::getSaveFileName(this,
                tr("Save Image"), std::getenv("HOME"),
                tr(JPEG ";;" PNG ";;"),
                &selected);

        if(!name.isEmpty()) {
            if(selected == PNG) {
                orginal.save(name + ".png");
            } else if(selected == JPEG) {
                orginal.save(name + ".jpg");
            }
        }

    } else if(ui->copy->isChecked()) {
        QClipboard *clipboard = QApplication::clipboard();

        clipboard->setPixmap(orginal);
    }

    close();
}

void Preview::on_cancel_clicked()
{
    close();
}

