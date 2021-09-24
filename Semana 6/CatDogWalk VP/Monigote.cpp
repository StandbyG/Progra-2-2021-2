#include "Monigote.h"

Monigote::Monigote()
{	x = 50;
	y = 25;
	orientacion = direccion::abajo;
	dx = 0;
	dy = 1;
	w = 1;
	h = 2;
	cant_vidas = 5;
}
Monigote::~Monigote(){}
void Monigote::Desplazamiento(direccion nueva_orientacion)
{	orientacion = nueva_orientacion;
	dx = dy = 0;
	if (orientacion == direccion::arriba) dy = -1;
	if (orientacion == direccion::abajo) dy = 1;
	if (orientacion == direccion::izquierda) dx = -1;
	if (orientacion == direccion::derecha) dx = 1;
}
void Monigote::Imprimir()
{	Console::SetCursorPosition(x, y); cout << (char)64;
	Console::SetCursorPosition(x, y+1); cout << (char)197;
}
void Monigote::Mover(int Wventana, int Hventana)
{
	Borrar();
	if (x + dx<1 || x + dx + w>Wventana)dx = 0;
	if (y + dy<1 || y + dy + h>Hventana)dy = 0;
	x = x + dx;
	y = y + dy;
	Imprimir();
}
int Monigote::retornar_cantvidas() { return cant_vidas; }
void Monigote::cambiar_cantvidas(int nuevo) { cant_vidas = nuevo; }