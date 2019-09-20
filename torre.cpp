#include "torre.h"

Torre::Torre()
{
    TOP = nullptr;
}
bool Torre::Insere(Ficha *dat)
{
    No *p = No::MontaNo(dat);

    if(!p)
    {
        return false;
    }
    p->SetNext(TOP);
    TOP = p;
    return true;
}
bool Torre::Retira(Ficha *dat)
{
    if(!TOP)
    {
        return false;
    }
    No *p = TOP;
    TOP = p->GetNext();
    No::DesmontaNo(dat, p);
    return true;
}
