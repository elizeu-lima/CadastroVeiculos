#pragma once
#include "veiculo.h"
class moto :
    public veiculo
{
private:
    bool garupa;
public:
    moto();
    virtual~moto();
    void setGarupa(bool g);
    bool getGarupa();
};

