/********************************************************************************
** Form generated from reading UI file 'ScreenshotUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTUI_H
#define UI_SCREENSHOTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenshotUI
{
public:
    QPushButton *whole_screen;
    QPushButton *select_area;
    QSpinBox *delay;
    QLabel *label;

    void setupUi(QWidget *ScreenshotUI)
    {
        if (ScreenshotUI->objectName().isEmpty())
            ScreenshotUI->setObjectName(QString::fromUtf8("ScreenshotUI"));
        ScreenshotUI->resize(413, 157);
        whole_screen = new QPushButton(ScreenshotUI);
        whole_screen->setObjectName(QString::fromUtf8("whole_screen"));
        whole_screen->setGeometry(QRect(10, 50, 121, 24));
        select_area = new QPushButton(ScreenshotUI);
        select_area->setObjectName(QString::fromUtf8("select_area"));
        select_area->setGeometry(QRect(10, 110, 121, 24));
        delay = new QSpinBox(ScreenshotUI);
        delay->setObjectName(QString::fromUtf8("delay"));
        delay->setGeometry(QRect(290, 80, 95, 28));
        delay->setMaximum(100);
        label = new QLabel(ScreenshotUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 60, 57, 16));

        retranslateUi(ScreenshotUI);

        QMetaObject::connectSlotsByName(ScreenshotUI);
    } // setupUi

    void retranslateUi(QWidget *ScreenshotUI)
    {
        ScreenshotUI->setWindowTitle(QCoreApplication::translate("ScreenshotUI", "ScreenshotUI", nullptr));
        whole_screen->setText(QCoreApplication::translate("ScreenshotUI", "Whole screen", nullptr));
        select_area->setText(QCoreApplication::translate("ScreenshotUI", "Select area", nullptr));
        label->setText(QCoreApplication::translate("ScreenshotUI", "Delay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenshotUI: public Ui_ScreenshotUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTUI_H
