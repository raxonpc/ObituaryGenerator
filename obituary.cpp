#include "obituary.h"
#include "./ui_obituary.h"

Obituary::Obituary(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Obituary)
{
    ui->setupUi(this);
}

Obituary::~Obituary()
{
    delete ui;
}

