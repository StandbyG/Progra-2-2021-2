#pragma once
#include <iostream>
using namespace std;
using namespace System;
public enum direccion{arriba,abajo,izquierda,derecha};
class Monigote
{
	private:
		int x, y, w, h, dx, dy;
		direccion orientacion;
	public:
	Monigote();
	~Monigote();
	void Imprimir();
	void Borrar();
	void Mover(int Wventana, int Hventana);
	void Desplazamiento(direccion nueva_orientacion);
	int retonar_x();
	int retonar_y();
	int retonar_w();
	int retonar_h();
};

/*
@
┼
*/