/********************************************************************************
** Form generated from reading UI file 'CaptureImage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREIMAGE_H
#define UI_CAPTUREIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CaptureImage
{
public:

    void setupUi(QDialog *CaptureImage)
    {
        if (CaptureImage->objectName().isEmpty())
            CaptureImage->setObjectName(QString::fromUtf8("CaptureImage"));
        CaptureImage->resize(400, 300);

        retranslateUi(CaptureImage);

        QMetaObject::connectSlotsByName(CaptureImage);
    } // setupUi

    void retranslateUi(QDialog *CaptureImage)
    {
        CaptureImage->setWindowTitle(QCoreApplication::translate("CaptureImage", "CaptureImage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaptureImage: public Ui_CaptureImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREIMAGE_H
