/********************************************************************************
** Form generated from reading UI file 'Preview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEW_H
#define UI_PREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preview
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *okay;
    QPushButton *cancel;
    QRadioButton *save;
    QRadioButton *copy;

    void setupUi(QWidget *Preview)
    {
        if (Preview->objectName().isEmpty())
            Preview->setObjectName(QString::fromUtf8("Preview"));
        Preview->resize(476, 218);
        Preview->setStyleSheet(QString::fromUtf8("font: 10pt \"MesloLGS NF\";"));
        label = new QLabel(Preview);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 40, 281, 131));
        label_2 = new QLabel(Preview);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 15, 71, 21));
        okay = new QPushButton(Preview);
        okay->setObjectName(QString::fromUtf8("okay"));
        okay->setGeometry(QRect(390, 190, 80, 24));
        cancel = new QPushButton(Preview);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(310, 190, 80, 24));
        save = new QRadioButton(Preview);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(20, 70, 151, 22));
        save->setChecked(true);
        copy = new QRadioButton(Preview);
        copy->setObjectName(QString::fromUtf8("copy"));
        copy->setGeometry(QRect(20, 140, 161, 22));

        retranslateUi(Preview);

        QMetaObject::connectSlotsByName(Preview);
    } // setupUi

    void retranslateUi(QWidget *Preview)
    {
        Preview->setWindowTitle(QCoreApplication::translate("Preview", "Preview", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Preview", "Preview", nullptr));
        okay->setText(QCoreApplication::translate("Preview", "Okay", nullptr));
        cancel->setText(QCoreApplication::translate("Preview", "Cancel", nullptr));
        save->setText(QCoreApplication::translate("Preview", "Save as Image", nullptr));
        copy->setText(QCoreApplication::translate("Preview", "Copy to Clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preview: public Ui_Preview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEW_H
