#pragma once
class produto
{
private:
	int qtdeEstoque;

public:
	produto();
	virtual~produto();
	void setQtdeEstoque(int);
	int getQtdeEstoque();
};

