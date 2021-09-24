#include "Gato.h"
Gato::Gato()
{
	x = 1 + rand() % 80;
	y = 5 + rand() % 40;
	w = 7;
	h = 3;
	dy = 1; dx = 0;
	tipo = 2;
}
Gato::~Gato() {}
void Gato::Imprimir()
{
	Console::SetCursorPosition(x, y);	cout << " /\\_/\\";
	Console::SetCursorPosition(x, y + 1);	cout << "( o.o )";
	Console::SetCursorPosition(x, y + 2);	cout << " > ^ <";
}
void Gato::Mover(int Wventana, int Hventana)
{
	Borrar();
	if (y + dy <1 || y + dy + h>Hventana) dy = dy * -1;
	y = y + dy;
	Imprimir();
}