#include "widget.h"

Widget::Widget(QWidget* parent) : QWidget(parent)
{
    this->setWindowTitle("Программа ползунок");
    this->resize(400, 250);
    spin_box = new QSpinBox();
    spin_box->setRange(0, 100);
    spin_box->setValue(50);

    btn_exit = new QPushButton("&Выход");
    QObject::connect(btn_exit, &QPushButton::clicked, this, &QWidget::close);

    slider_h = new QSlider(Qt::Horizontal);
    slider_h->setRange(0, 100);
    QObject::connect(spin_box, &QSpinBox::valueChanged, slider_h, &QSlider::setValue);
    QObject::connect(slider_h, &QSlider::valueChanged, spin_box, &QSpinBox::setValue);

    slider_v = new QSlider(Qt::Vertical);
    slider_v->setRange(0, 100);
    QObject::connect(spin_box, &QSpinBox::valueChanged, slider_v, &QSlider::setValue);
    QObject::connect(slider_v, &QSlider::valueChanged, spin_box, &QSpinBox::setValue);

    layout = new QHBoxLayout();
    layout->addWidget(spin_box);
    layout->addWidget(slider_h);
    layout->addWidget(slider_v);
    layout->addWidget(btn_exit);

    this->setLayout(layout);
}

Widget::~Widget()
{
}
