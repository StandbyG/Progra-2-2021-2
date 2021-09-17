#pragma once
#include "Monigote.h"
#include "Pelotas.h"
using namespace System::Drawing;
class Controladora
{
private:
	Monigote* objM;
	Pelotas* objP;
	int cant_golpes;
public:
	Controladora();
	~Controladora();
	void Desplazar_Monigote(char tecla, int Wventana, int Hventana);
	void Mover_Todos(int Wventana, int Hventana);
	bool Colision();
	int retornar_cant_golpes();
	void Insertar_Pelotas();
	bool Termino();
};

