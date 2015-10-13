#ifndef SLOT_H
#define SLOT_H

#include <string>

using namespace std;

class Slot
{
public:
    Slot();
    virtual ~Slot();
    virtual void ontgrendel(string) =0;
    virtual void vergrendel() =0;
    virtual bool isVergrendeld() const =0;

};

#endif // SLOT_H
