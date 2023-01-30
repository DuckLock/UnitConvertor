#include "widget.h"
#include "unitconvertor.h"
#include <QApplication>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(0,0);
    w.setWindowTitle("Unit Convertor");

    QVBoxLayout* l = new QVBoxLayout;


    UnitConvertor* calc1 = new UnitConvertor("nm","μm",0.001);
    UnitConvertor* calc2 = new UnitConvertor("μm","mm",0.001);
    UnitConvertor* calc3 = new UnitConvertor("mm","cm",0.1);
    UnitConvertor* calc4 = new UnitConvertor("cm","dm",0.1);
    UnitConvertor* calc5 = new UnitConvertor("dm","m",0.1);
    UnitConvertor* calc6 = new UnitConvertor("m","km",0.001);

    UnitConvertor* calc7 = new UnitConvertor("cm/s","m/s",0.01);
    UnitConvertor* calc8 = new UnitConvertor("m/s","km/h",3.6);

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
