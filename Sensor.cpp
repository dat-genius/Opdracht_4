#include "Sensor.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>
#include "HallSensor.h"

Sensor::Sensor(int a,int b): x(a),y(b),geactiveerd(false)
{
}

void Sensor::Activeer()
{
    geactiveerd=true;
}

void Sensor::Deactiveer()
{
    geactiveerd=false;
}

bool Sensor::isGeactiveerd() const
{

    return geactiveerd;

}

void Sensor::teken(QPaintDevice* tp)
{
    QPainter p(tp);
    QColor kleur;
    p.setBrush(Qt::SolidPattern);
    if(geactiveerd)
        kleur=Qt::blue;
     else
         kleur=Qt::yellow;

     p.setBrush(kleur);
     QPen pen(kleur,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
     p.setPen(pen);
     p.drawRect(x,y,40,40);
}

int Sensor::getX(){
    return x;
}

int Sensor::getY(){
    return y;
}
