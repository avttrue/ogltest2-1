#include "oglwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OGLWidget w;
    w.show();

    return a.exec();
}
