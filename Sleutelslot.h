#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "slot.h"
#include <string.h>

using namespace std;

class Sleutelslot : public Slot
{
public:
    Sleutelslot(string);
    void ontgrendel(string);
    void vergrendel();
    bool isVergrendeld() const;
private:
    string sleutel;
    bool vergrendeld;
};

#endif // SLEUTELSLOT_H
