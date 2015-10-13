#include "HallSensor.h"
#include <QPen>
#include <QPainter>
#include <QImage>
#include <QLabel>


HallSensor::HallSensor(int a,int b): Sensor(a, b)
{

}

void HallSensor::Activeer()
{
    Sensor::Activeer();
}

void HallSensor::Deactiveer()
{
    Sensor::Deactiveer();

}
