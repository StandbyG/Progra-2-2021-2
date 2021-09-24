#pragma once
#include "Figura.h"
class Gato :    public Figura
{
public:
	Gato();
	~Gato();
	void Imprimir();
	void Mover(int Wventana, int Hventana);
};

