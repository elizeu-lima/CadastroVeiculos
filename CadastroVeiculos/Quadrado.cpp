#include "pch.h"
#include "Quadrado.h"

Quadrado::Quadrado()
{
}
Quadrado::~Quadrado()
{
}
float Quadrado::Perimetro()
{
	return 4 * Lado;
}
void Quadrado::setLado(float l)
{
	if (l > 0)
		Lado = l;
	else
		Lado = 0;
}
float Quadrado::getLado()
{
	
	return Lado;
}