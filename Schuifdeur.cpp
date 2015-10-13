#include "Schuifdeur.h"
#include "HallSensor.h"


Schuifdeur::Schuifdeur(QLabel *a) : Deur(a){

}

Schuifdeur::Schuifdeur(QLabel *a, Sensor *b) : Deur(a), sensor(b){

}

void Schuifdeur::Sluit(){
    if(sensor != nullptr){
        if(!sensor->isGeactiveerd()){
            Deur::Sluit();
        }
    }
    else{
        Deur::Sluit();
    }
}

