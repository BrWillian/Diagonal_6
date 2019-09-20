#include "deque.h"

Deque::Deque()
{
    comeco = fim = nullptr;
}
bool Deque::Insere(Ficha *dat)
{
    No *p = No::MontaNo(dat);

    if(!p)
    {
        return false;
    }

    if(!comeco)
    {
        comeco = fim = p;
    }else
    {
        fim->SetNext(p);
        fim = p;
    }
    return true;
}
bool Deque::Retira(Ficha *dat)
{
    if(!comeco)
    {
        return false;
    }

    No *p = comeco;
    comeco = p->GetNext();
    No::DesmontaNo(dat, p);

    if(!comeco)
    {
        fim = nullptr;
    }
    return true;
}
