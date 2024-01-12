#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget window;
    window.setWindowTitle("Программа ползунок");
    window.show();
    return a.exec();
}
