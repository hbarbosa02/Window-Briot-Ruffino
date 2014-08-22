#include "br.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BR w;
    w.show();

    return a.exec();
}
