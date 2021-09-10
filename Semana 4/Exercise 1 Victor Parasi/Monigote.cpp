#include "Monigote.h"
Monigote::Monigote() 
{
	x = 50;
	y = 2;
	dy = 2;
	dx = 0;
	w = 1;
	h = 2;
	orientacion = direccion::abajo;
}
Monigote::~Monigote() 
{}
void Monigote::Imprimir() 
{
	Console::SetCursorPosition(x, y);
	cout << (char)64;
	Console::SetCursorPosition(x, y+1);
	cout << (char)197;
}
void Monigote::Borrar() 
{	for(int i=x;i<x+w;i++)
		for (int j = y; j < y + h; j++)
		{
			Console::SetCursorPosition(i,j);
			cout << ' ';
		}
}
void Monigote::Mover(int Wventana, int Hventana)
{
	Borrar();
	if (x + dx<1 || x + dx + w>Wventana)  dx = 0;
	if (y + dy<1 || y + dy + h>Hventana)  dy = 0;
	x = x + dx;
	y = y + dy;
	Imprimir();
}
void Monigote::Desplazamiento(direccion nueva_orientacion)
{
	orientacion = nueva_orientacion;
	dx = dy = 0;
	if (orientacion == direccion::izquierda) dx = -2;
	if (orientacion == direccion::derecha) dx = 2;
	if (orientacion == direccion::arriba) dy = -2;
	if (orientacion == direccion::abajo) dy = 2;
}

int Monigote::retonar_x() { return x; }
int Monigote::retonar_y() { return y; }
int Monigote::retonar_w() { return w; }
int Monigote::retonar_h() { return h; }