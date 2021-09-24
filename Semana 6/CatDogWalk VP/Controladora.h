#pragma once
#include "Monigote.h"
#include "Figuras.h"
using namespace System::Drawing;
class Controladora
{
private:
	Monigote* objM;
	Figuras* objPG;
	bool inmovil;
	time_t tiempo_inicio_app; //inmovil
	time_t tiempo_inicio_app_p; //perro
	time_t tiempo_inicio_app_g; //gato
public:
	Controladora();
	~Controladora();
	void Desplazar_Monigote(char tecla);
	void Mover_Todos(int Wventana, int Hventana);
	bool Colision();
	bool TieneVidas();
	void Insertar_PerrosGatos();
	void Inmovil_2Segundos();
};

