#include "no.h"

No::No()
{

}
No *No::MontaNo(Ficha *dat)
{
    No *p = new No;

    if(p)
    {
        p->ficha = *dat;
        p->next = nullptr;
    }
    return p;
}
void No::DesmontaNo(Ficha *dat, No *p)
{
    if(p)
    {
        *dat = p->ficha;
        delete p;
    }
}
void No::SetNext(No *p)
{
    next = p;
}
No *No::GetNext()
{
    return next;
}
