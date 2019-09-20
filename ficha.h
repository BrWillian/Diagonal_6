#ifndef FICHA_H
#define FICHA_H


class Ficha
{
private:
    char Jogador;
    char Cor;
    char Torre;
public:
    void SetJogador(char Jogador)
    {
        this->Jogador = Jogador;
    }
    void SetCor(char Cor)
    {
        this->Cor = Cor;
    }
    void SetTorre(char Torre)
    {
        this->Torre = Torre;
    }

    Ficha();
};

#endif // FICHA_H
