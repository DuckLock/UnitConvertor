#include "widget.h"
#include "unitconvertor.h"
#include <QApplication>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(450,240);
    w.setWindowTitle("Unit Convertor");

    QVBoxLayout* l = new QVBoxLayout;

    UnitConvertor* calc1 = new UnitConvertor("m","km",0.001);
    UnitConvertor* calc2 = new UnitConvertor("mm","cm",0.1);
    UnitConvertor* calc3 = new UnitConvertor("cm","dm",0.1);
    UnitConvertor* calc4 = new UnitConvertor("dm","m",0.1);
    UnitConvertor* calc5 = new UnitConvertor("cm","dm",0.1);

    UnitConvertor* calc6 = new UnitConvertor("cm","dm",0.1);
    UnitConvertor* calc7 = new UnitConvertor("cm","dm",0.1);
    UnitConvertor* calc8 = new UnitConvertor("cm","dm",0.1);

    l->addWidget(calc1);
    l->addWidget(calc2);
    l->addWidget(calc3);
    l->addWidget(calc4);
    l->addWidget(calc5);
    l->addWidget(calc6);
    l->addWidget(calc7);
    l->addWidget(calc8);

    w.setLayout(l);
    w.show();
    return a.exec();
}
