#ifndef WIDGET_H
#define WIDGET_H

#include <QHBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

  public:
    Widget(QWidget* parent = nullptr);
    ~Widget();

  protected:
    QSpinBox* spin_box;
    QPushButton* btn_exit;
    QSlider* slider_h;
    QSlider* slider_v;
    QHBoxLayout* layout;
};
#endif  // WIDGET_H
