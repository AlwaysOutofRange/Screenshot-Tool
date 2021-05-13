//
// Created by nico on 11.05.21.
//

#ifndef SCREENSHOT_TOOL_CAPTUREIMAGE_HPP
#define SCREENSHOT_TOOL_CAPTUREIMAGE_HPP

#include <QDialog>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class CaptureImage; }
QT_END_NAMESPACE

class CaptureImage : public QDialog {
    Q_OBJECT

public:
    explicit CaptureImage(QWidget *parent = nullptr);

    ~CaptureImage() override;

    QPixmap selectPixmap;

private:
    Ui::CaptureImage *ui;

    QPixmap desktopPixmap;
    QRect selectRect;

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void paintEvent(QPaintEvent* event) override;
};


#endif //SCREENSHOT_TOOL_CAPTUREIMAGE_HPP
