#pragma once
#include "Pelota.h"
class Pelotas
{
private:
	Pelota** arreglo;
	int* n_elementos;
public:
	Pelotas();
	~Pelotas();
	void Insertar();
	void Mover(int Wventana, int Hventana);
	int retornar_nelementos();
	Pelota* retornar_pelota(int indice);
};

