#include "Deur.h"

Deur::Deur(QLabel *a) : Status(false), label(a){

}

void Deur::Open() {
    if(!sloten.empty()){
        list<Slot*>::iterator it=sloten.begin();
       // slot->ontgrendel(s);
        int i = 0;
        for(it = sloten.begin(); it != sloten.end(); ++it){
         //   Slot * slotje = *it;
         //   if(slotje->isVergrendeld()){
              if((*it)->isVergrendeld()){
                i++;
            }
        }
        if(i == 0){
            Status = true;
            label->setText("Deur open");
        }
    }
    else {
        Status = true;
        label->setText("Deur open");
    }
}

void Deur::Sluit() {
    Status = false;
    label->setText("Deur dicht");
    list<Slot*>::iterator it=sloten.begin();
    if(!sloten.empty()){
        for(it = sloten.begin(); it != sloten.end(); ++it){
            Slot * slotje = *it;
            slotje->vergrendel();
        }
    }
}

bool Deur::isDeurOpen() const {
    return Status;
}

void Deur::monteerExtraSlot(Slot *slot){
    sloten.push_back(slot);
}
