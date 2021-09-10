#include "Carro.h"
Carro::Carro()
{
	x = 1 + rand() % 80;
	y = 5 + rand() % 40;
	dx = 2 + rand() % 3;
	h = 2;
	w = 11;
	eliminar = false;
}
Carro::~Carro()
{}
void Carro::Borrar()
{
	for (int i = x; i < x + w; i++)
		for (int j = y; j < y + h; j++)
		{
			Console::SetCursorPosition(i, j);
			cout << ' ';
		}
}
void Carro::Imprimir()
{	
		Console::SetCursorPosition(x, y);
		cout << ".-'--`-._";
		Console::SetCursorPosition(x, y + 1);
		cout << "'-O---O--'";
}
void Carro::Mover(int Wventana, int Hventana)
{
	Borrar();
	if (x + dx<1 || x + w + dx>Wventana)
	{
		eliminar = true;
		//dx = dx * -1;
	}
	x = x + dx;
	Imprimir();

}
bool Carro::retornar_eliminar()
{
	return eliminar;
}
int Carro::retonar_x() { return x; }
int Carro::retonar_y() { return y; }
int Carro::retonar_w() { return w; }
int Carro::retonar_h() { return h; }