//
// Created by nico on 29.04.21.
//

#ifndef SCREENSHOT_TOOL_SCREENSHOTUI_HPP
#define SCREENSHOT_TOOL_SCREENSHOTUI_HPP

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class ScreenshotUI; }
QT_END_NAMESPACE

class ScreenshotUI : public QWidget {
Q_OBJECT

public:
    explicit ScreenshotUI(QWidget *parent = nullptr);

    ~ScreenshotUI() override;

private slots:
    void on_whole_screen_clicked();
    void on_select_area_clicked();

private:
    Ui::ScreenshotUI *ui;
};


#endif //SCREENSHOT_TOOL_SCREENSHOTUI_HPP
