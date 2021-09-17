#pragma once
#include <iostream> 
using namespace std;
using namespace System;
public enum direccion {arriba,abajo,izquierda,derecha};
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
		void Mover(int Wventana,int Hventana);
		void Desplazar(direccion nueva_orientacion);
		int retornar_x();
		int retornar_y();
		int retornar_w();
		int retornar_h();
};

