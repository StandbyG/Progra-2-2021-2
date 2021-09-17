#include "Monigote.h"
Monigote::Monigote() {
 
	x = 50;
	y = 44;
	w = 1;
	h = 2;
	orientacion = direccion::derecha;
	dy = 0;
	dx = 1;
}
Monigote::~Monigote() {}
void Monigote::Imprimir() {
	Console::SetCursorPosition(x, y);
	cout << (char)64;
	Console::SetCursorPosition(x, y+1);
	cout <<(char)197;
}
void Monigote::Borrar() {
	for (int i=x;i<x+w;i++)
		for (int j = y; j < y + h; j++)
		{
			Console::SetCursorPosition(i, j); 
			cout << ' ';
		}
}
void Monigote::Mover(int Wventana, int Hventana) {

	Borrar();
	if (x + dx<1 || x + w + dx>Wventana) dx = 0;
	x = x + dx;
	Imprimir();

}
void Monigote::Desplazar(direccion nueva_orientacion) 
{
	orientacion = nueva_orientacion;
	dx = dy = 0;
	if (orientacion == direccion::derecha) dx = 1;
	if (orientacion == direccion::izquierda) dx = -1;

}

int Monigote::retornar_x() { return x; }
int Monigote::retornar_y() { return y; }
int Monigote::retornar_w() { return w; }
int Monigote::retornar_h() { return h; }