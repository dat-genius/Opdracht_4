#include "Codeslot.h"

Codeslot::Codeslot(int c): Slot(), code(c), vergrendeld(true) {

}

void Codeslot::ontgrendel(string s){
    if(code == atoi(s.c_str())){
        vergrendeld=false;
    }


}

void Codeslot::vergrendel(){
    vergrendeld = true;
}

bool Codeslot::isVergrendeld() const{
    return vergrendeld;
}
