#include "Pelota.h"

Pelota::Pelota()
{
	x = 1 + rand() % 80;
	y = 1 + rand() % 25;
	dy = dx= 1;
	h = 1;
	w = 3;
	choco_en_borde = false;
}
Pelota::~Pelota()
{}
void Pelota::Borrar()
{
	for (int i = x; i < x + w; i++)
		for (int j = y; j < y + h; j++)
		{
			Console::SetCursorPosition(i, j);
			cout << ' ';
		}
}
void Pelota::Imprimir()
{
	Console::SetCursorPosition(x, y);
	cout << "000";

}
void Pelota::Mover(int Wventana, int Hventana)
{
	Borrar();
	if (x + dx<1 || x + w + dx > Wventana) dx = dx * -1;
	if (y + dy < 1) dy = dy * -1;
	if (h + y + dy > Hventana) choco_en_borde = true;
	x = x + dx;
	y = y + dy;
	Imprimir();
}
bool Pelota::retornar_choco_en_borde() 
{ return choco_en_borde; }


int Pelota::retornar_x() { return x; }
int Pelota::retornar_y() { return y; }
int Pelota::retornar_w() { return w; }
int Pelota::retornar_h() { return h; }
int Pelota::retornar_dx() { return dx; }
int Pelota::retornar_dy() { return dy; }
void Pelota::cambiar_dx(int nuevo) { dx = nuevo; }
void Pelota::cambiar_dy(int nuevo) { dy = nuevo; }