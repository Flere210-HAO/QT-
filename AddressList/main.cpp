#include<QTextStream>
#include"mainwidget.h"
#include<QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    mainwidget w;
    w.show();

    return app.exec();
}
