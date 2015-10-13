#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H
#include "Deur.h"
#include "Sensor.h"

class Schuifdeur : public Deur
{
public:
    Schuifdeur(QLabel *);
    Schuifdeur(QLabel *, Sensor *);
    void Sluit();
private:
    Sensor * sensor;
};

#endif // SCHUIFDEUR_H
