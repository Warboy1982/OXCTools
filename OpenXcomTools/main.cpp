#include "oxctools.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OXCTools w;
    w.show();
    
    return a.exec();
}
