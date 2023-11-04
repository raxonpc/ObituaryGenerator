#ifndef NEKROLOG_H
#define NEKROLOG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Nekrolog; }
QT_END_NAMESPACE

class Nekrolog : public QMainWindow
{
    Q_OBJECT

public:
    Nekrolog(QWidget *parent = nullptr);
    ~Nekrolog();

private:
    Ui::Nekrolog *ui;
};
#endif // NEKROLOG_H
