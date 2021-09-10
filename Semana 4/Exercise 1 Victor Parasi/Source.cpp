#include <conio.h>
#include "Controladora.h"

int main()
{
	const int Wventana = 100;
	const int Hventana = 50;
	Controladora* obj = new Controladora();
	Console::SetWindowSize(Wventana, Hventana);
	Console::CursorVisible = false;
	while (!obj->Colision())
	{
		if (kbhit())
		{
			char t = getch();
			obj->Desplazar_Monigote(toupper(t));
			flushall();
		}
		obj->InsertarCarros();
		obj->Mover(Wventana, Hventana);
		_sleep(100);
		if (obj->Gano())
		{
			Console::Clear();
			cout << "GANO!!!";
			break;
		}
	}
	getch();
	delete obj;

}