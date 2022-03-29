#include "pch.h"
#include "produto.h"

produto::produto()
{
}
produto::~produto()
{
}
void produto::setQtdeEstoque(int q)
{
	qtdeEstoque = q;
}
int produto::getQtdeEstoque()
{
	return qtdeEstoque;
}
