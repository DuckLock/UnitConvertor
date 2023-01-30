#ifndef UNITCONVERTOR_H
#define UNITCONVERTOR_H

#include <QLabel>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDoubleValidator>


class UnitConvertor : public QWidget
{
    Q_OBJECT
public:
    explicit UnitConvertor(QString slvu = "",QString srvu = "",double n = 1);

private:
    QLabel* lvu;        //left value unit
    QLabel* rvu;        //right value unit
    QLabel* equel;      // " = "
    QLineEdit* lve;     //left value edit
    QLineEdit* rve;     //right value edit
    QPushButton* swap;  //rotate 180 degree

    QString lu,ru,tmp;  //the text of label

    double x;
    bool isltr;         //is left value to right value

public slots:
    void calc();        //show the result in right QLineEdit
    void swapunit();    //QPushButton* swap;
};
#endif // UNITCONVERTOR_H
