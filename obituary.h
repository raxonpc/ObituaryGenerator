#ifndef Obituary_H
#define Obituary_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Obituary; }
QT_END_NAMESPACE

class Obituary : public QMainWindow
{
    Q_OBJECT

public:
    Obituary(QWidget *parent = nullptr);
    ~Obituary();

private:
    Ui::Obituary *ui;
};
#endif // Obituary_H
