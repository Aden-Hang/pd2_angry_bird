#include "mainwindow.h"
#include <QApplication>

int bird = 1;
int main(int argc, char *argv[])
{   QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
        w.show();
        a.exec();
        if(bird==2)
            return 0;
        w.show();
    return 0;
}
