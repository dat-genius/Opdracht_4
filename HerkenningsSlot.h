#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H
#include "Slot.h"
#include "Afdrukker.h"
#include <map>

class HerkenningsSlot : public Slot
{
public:
    HerkenningsSlot();
    void ontgrendel(string);
    void vergrendel();
    bool isVergrendeld() const;
    void voegAutorisatieToe(string naam, bool toegang);
    void toonKaartenbak(Afdrukker eenAfdrukker);

private:
    map<std::string,bool> kaartenbak;
    bool vergrendeld;
};

#endif // HERKENNINGSSLOT_H
