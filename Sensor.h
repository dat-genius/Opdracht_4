#ifndef SENSOR_H
#define SENSOR_H

class QPaintDevice;

class Sensor
{
public:
    Sensor(int, int);
    void teken(QPaintDevice*);
    virtual void Activeer();
    virtual void Deactiveer();
    bool isGeactiveerd()const;
    int getX();
    int getY();

private:
    int x,y;
    bool geactiveerd;
};

#endif // SENSOR_H
