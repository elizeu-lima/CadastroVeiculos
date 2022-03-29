#pragma once
class Quadrado
{
private:
	float Lado;
		
public:
	Quadrado();
	virtual~Quadrado();
	float Perimetro();
	void setLado(float);
	float getLado();
};

