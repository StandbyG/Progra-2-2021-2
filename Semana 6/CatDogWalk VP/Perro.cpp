#include "Perro.h"
Perro::Perro()
{	x = 5 + rand() % 80;
	y = 5 + rand() % 40;
	w = 10;
	h = 4;
	dy = 0;
	dx = 1;
	tipo = 1;
}
Perro::~Perro(){}
void Perro::Imprimir()
{	
	Console::SetCursorPosition(x, y);	cout<<  "      __";
	Console::SetCursorPosition(x, y+1);	cout << " (___()'`;";
	Console::SetCursorPosition(x, y+2);	cout << " /,    /`";
	Console::SetCursorPosition(x, y+3);	cout << "\\\\\"--\\\\";
}
void Perro::Mover(int Wventana, int Hventana)
{	Borrar();
	if (x + dx <1 || x + dx + w>Wventana) dx = dx * -1;
	x = x + dx;
	Imprimir();
}