#pragma once
#include "Figura.h"
public enum  direccion {arriba,abajo,izquierda,derecha};
class Monigote :    public Figura
{
private:
	direccion orientacion;
	int cant_vidas;
public:
	Monigote();
	~Monigote();
	void Desplazamiento(direccion nueva_orientacion);
	void Imprimir();
	void Mover(int Wventana, int Hventana);
	int retornar_cantvidas();
	void cambiar_cantvidas(int nuevo);
};

