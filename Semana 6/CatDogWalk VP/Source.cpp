#include <conio.h>
#include <iostream>
#include "Controladora.h"
using namespace System;
using namespace std;
int main()
{	const int Wventana = 100;
	const int Hventana = 50;
	Controladora* obj = new Controladora();
	Console::SetWindowSize(Wventana, Hventana);
	Console::CursorVisible = false;
	while (obj->TieneVidas())
	{	if (kbhit())
		{
			char t = getch();
			obj->Desplazar_Monigote(toupper(t));
			flushall();
		}
		obj->Mover_Todos(Wventana, Hventana);
		obj->Insertar_PerrosGatos();
		_sleep(100);
	}
	cout << endl;
	system("pause");
	delete obj;
}