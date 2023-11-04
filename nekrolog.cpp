#include "nekrolog.h"
#include "./ui_nekrolog.h"

Nekrolog::Nekrolog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Nekrolog)
{
    ui->setupUi(this);
    ui->retranslateUi(this);
}

Nekrolog::~Nekrolog()
{
    delete ui;
}

