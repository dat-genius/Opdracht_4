#ifndef DEUR_H
#define DEUR_H
#include <QLabel>
#include "Slot.h"

class Deur
{
public:
    Deur(QLabel *);
    virtual void Open();
    virtual void Sluit();
    virtual bool isDeurOpen() const;
    virtual void monteerExtraSlot(Slot *);
private:
    bool Status;
    QLabel *label;
    std::list<Slot*> sloten;
  //  std::list<Slot*>::iterator it;
};

#endif // DEUR_H
