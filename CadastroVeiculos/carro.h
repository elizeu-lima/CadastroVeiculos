#pragma once
#include "veiculo.h"
class carro :
    public veiculo
{
private:
    int portas;

public:
    carro();
    virtual~carro();
    void setPortas(int p);
    int getPortas();
};

