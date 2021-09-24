#pragma once
#include "Perro.h"
#include "Gato.h"
class Figuras
{
private:
	Figura** arreglo;
	int* n_elementos;
	time_t tiempo_inicio_app;
public:
	Figuras();
	~Figuras();
	void Insertar_Perro();
	void Insertar_Gato();
	void Mover(int Wventana, int Hventana);
	int retornar_elementos();
	Figura* retonar_figura(int indice);
};

