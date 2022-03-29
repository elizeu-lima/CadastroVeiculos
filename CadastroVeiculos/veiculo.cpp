#include "pch.h"
#include "veiculo.h"

veiculo::veiculo()
{
}
veiculo::~veiculo()
{
}
void veiculo::setMarca(string m)
{
	Marca = m;
}

void veiculo::setModelo(string m)
{
	Modelo = m;
}

void veiculo::setAno(int a)
{
	Ano = a;
}

void veiculo::setCor(Cores c)
{
	Cor = c;

}
string veiculo::getMarca()
{
	return Marca;
}

string veiculo::getModelo()
{
	return Modelo;
}
int veiculo::getAno()
{
	return Ano;
}
veiculo::Cores veiculo::getCor()
{
	return Cor;
}
void veiculo::Incluir()
{
}
void veiculo::Alterar()
{
}
void veiculo::Consultar()
{
}
void veiculo::Excluir()
{
}
