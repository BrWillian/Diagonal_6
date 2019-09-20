#ifndef NODE_H
#define NODE_H
#include "ficha.h"

class No
{
    Ficha ficha;
    No *next;
public:
    No();
    static No *MontaNo(Ficha *dat);
    static void DesmontaNo(Ficha *dat, No *p);
    void SetNext(No *p);
    No *GetNext();
};

#endif // NODE_H
