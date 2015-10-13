#include "Sleutelslot.h"

Sleutelslot::Sleutelslot(string s) : Slot(), sleutel(s), vergrendeld(true){

}

void Sleutelslot::ontgrendel(string s){
    if(s.compare(sleutel) == 0){
        vergrendeld = false;
    }
}

void Sleutelslot::vergrendel(){
    vergrendeld = true;
}

bool Sleutelslot::isVergrendeld() const{
    return vergrendeld;
}
