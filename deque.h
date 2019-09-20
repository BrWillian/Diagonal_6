#ifndef DEQUE_H
#define DEQUE_H
#include "no.h"
#include "ficha.h"

class Deque
{
private:
    No *comeco;
    No *fim;
public:
    bool Insere(Ficha *dat);
    bool Retira(Ficha *dat);
    Deque();
};

#endif // DEQUE_H
