#ifndef TORRE_H
#define TORRE_H
#include "no.h"
#include "ficha.h"

class Torre
{
private:
    No *TOP;
public:
    bool Insere(Ficha *dat);
    bool Retira(Ficha *dat);
    Torre();
};

#endif // TORRE_H
