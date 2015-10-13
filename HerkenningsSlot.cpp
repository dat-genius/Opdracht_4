#include "HerkenningsSlot.h"

HerkenningsSlot::HerkenningsSlot() : Slot(), vergrendeld(true)
{

}

void HerkenningsSlot::ontgrendel(string sleutel){
    if(kaartenbak.find(sleutel)->second){
        vergrendeld = false;
    }
}

void HerkenningsSlot::vergrendel(){
    vergrendeld = true;
}

bool HerkenningsSlot::isVergrendeld() const{
    return vergrendeld;
}

void HerkenningsSlot::voegAutorisatieToe(string naam, bool toegang){
    kaartenbak.insert(std::pair<string, bool>(naam, toegang));
}

void HerkenningsSlot::toonKaartenbak(Afdrukker eenAfdrukker){

}
