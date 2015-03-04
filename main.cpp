#include "quizzzzogame.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizzzzoGame w;
    w.show();

    return a.exec();
}
