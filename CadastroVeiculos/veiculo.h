#pragma once
#include "alugel.h"
#include "produto.h"
class veiculo:public produto,public alugel
{
private:
	enum Cores{Branca, Preta, Vermelha, Azul};
	string Marca;
	string Modelo;
	int Ano;
	Cores Cor;
public:
	veiculo();
	virtual~veiculo();
	void setMarca(string m);
	void setModelo(string m);
	void setAno(int a);
	void setCor(Cores c);
	string getMarca();
	string getModelo();
	int getAno();
	Cores getCor();
	void Incluir();
	void Consultar();
	void Alterar();
	void Excluir();
};

