#include "Figura.h"
Figura::Figura() {}
Figura::~Figura() {}
int Figura::retornar_x() { return x; }
int Figura::retornar_y() { return y; }
int Figura::retornar_w() { return w; }
int Figura::retornar_h() { return h; }
int Figura::retornar_tipo() { return tipo; }
void Figura::cambiar_x(int nuevo) { x = nuevo; }
void Figura::cambiar_y(int nuevo) { y = nuevo; }
void Figura::Borrar() {

	for (int i=x;i<x+w;i++)
		for (int j = y; j < y + h; j++)
		{
			Console::SetCursorPosition(i, j);
			cout << ' ';
		}

}