#include "unitconvertor.h"

UnitConvertor::UnitConvertor(QString slvu,QString srvu,double n)
    : QWidget{}
{
    lu = slvu;
    ru = srvu;
    tmp = "";

    isltr = true;
    x = n;

    lvu = new QLabel(lu, this);
    rvu = new QLabel(ru, this);
    equel = new QLabel("=",this);

    swap = new QPushButton("↔",this);
    lve = new QLineEdit();
    rve = new QLineEdit();

    lve->setValidator(new QDoubleValidator(this));
    lve->setMaxLength(9);
    rve->setReadOnly(true);

    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->addWidget(lve);
    layout->addWidget(lvu);
    layout->addWidget(equel);
    layout->addWidget(rve);
    layout->addWidget(rvu);
    layout->addWidget(swap);
    setLayout(layout);

    connect(swap,SIGNAL(clicked(bool)),this,SLOT(swapunit()));
    connect(lve,SIGNAL(textChanged(QString)),this,SLOT(calc()));

}

void UnitConvertor::swapunit()
{
    isltr = !isltr;

    tmp = lu;
    lu = ru;
    ru = tmp;

    lve->clear();
    rve->clear();

    lvu->setText(lu);
    rvu->setText(ru);
}

void UnitConvertor::calc()
{
    if(isltr)
    {
        double v = lve->text().toDouble();
        rve->setText(QString::number(v * x,'d', 3));
    }
    else
    {
        double v = lve->text().toDouble();
        rve->setText(QString::number(v / x,'d', 3));
    }
}

