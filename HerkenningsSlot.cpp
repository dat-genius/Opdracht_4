#include "HerkenningsSlot.h"

HerkenningsSlot::HerkenningsSlot() : Slot(), vergrendeld(false)
{

}

void HerkenningsSlot::ontgrendel(string sleutel){

}

void HerkenningsSlot::vergrendel(){

}

bool HerkenningsSlot::isVergrendeld(){
    return vergrendeld;
}

void HerkenningsSlot::voegAutorisatieToe(string naam, bool toegang){

}

void HerkenningsSlot::toonKaartenbak(Afdrukker eenAfdrukker){

}
