#include <QApplication>

#include "leaker.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Leaker leaker;
    leaker.show();

    return app.exec();
}
