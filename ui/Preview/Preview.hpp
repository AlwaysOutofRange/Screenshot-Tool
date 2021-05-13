#ifndef PREVIEW_HPP
#define PREVIEW_HPP

#include <QWidget>
#include <QPixmap>

namespace Ui {
class Preview;
}

class Preview : public QWidget
{
    Q_OBJECT

public:
    explicit Preview(QWidget *parent = nullptr);
    ~Preview();

    void setImage(QPixmap map);

private slots:
    void on_okay_clicked();

    void on_cancel_clicked();

private:
    Ui::Preview *ui;

    QPixmap orginal;
};

#endif // PREVIEW_HPP
