#include "quizzzzogame.h"
#include "ui_quizzzzogame.h"

QuizzzzoGame::QuizzzzoGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuizzzzoGame)
{
    ui->setupUi(this);
}

QuizzzzoGame::~QuizzzzoGame()
{
    delete ui;
}
