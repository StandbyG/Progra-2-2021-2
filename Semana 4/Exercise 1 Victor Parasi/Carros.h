#pragma once
#include <time.h>
#include "Carro.h"
class Carros
{
private:
	Carro** arreglo;
	int* n_elementos;
	time_t tiempo_inicio_app;
public:
	Carros();
	void Insertar();
	void Eliminar();
	void Mover(int Wventana, int Hventana);
	~Carros();
	int retornar_nelementos();
	Carro* retornar_carro(int indice);
};

