#include "pch.h"

void UtilizarQuadrado();
void UtilizarHeranca();

int main()
{
    UtilizarHeranca();

 return 0;
}

void UtilizarHeranca()
{
    veiculo v;
    carro c;
    moto m;
    

}

void UtilizarQuadrado()
{
    float l,p;
    Quadrado q;
    Quadrado* pq;
    cout << "Primeiro quadrado:\n";
    cout << "Informe o lado: ";
    cin >> l;
    q.setLado(l);
    
    p = q.Perimetro();
    cout << "O lado do quadrado e:" << q.getLado();
    cout << "O perimetro e:" << p;

  



}

