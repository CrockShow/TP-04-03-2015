#ifndef QUIZZZZOGAME_H
#define QUIZZZZOGAME_H

#include <QMainWindow>

namespace Ui {
class QuizzzzoGame;
}

class QuizzzzoGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuizzzzoGame(QWidget *parent = 0);
    ~QuizzzzoGame();

private:
    Ui::QuizzzzoGame *ui;
};

#endif // QUIZZZZOGAME_H
