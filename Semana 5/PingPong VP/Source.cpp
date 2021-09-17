#include <conio.h>
#include "Controladora.h"

int main()
{
	const int Wventana = 100;
	const int Hventana = 50;
	Console::SetWindowSize(Wventana, Hventana);
	Console::CursorVisible = false;
	Controladora* obj = new Controladora();
	obj->Insertar_Pelotas();
	while (!obj->Termino())
	{
		if (kbhit())
		{
			char t = getch();
			obj->Desplazar_Monigote(toupper(t), Wventana, Hventana);
			flushall();
		}
		obj->Mover_Todos(Wventana, Hventana);
		_sleep(100);
	}
	delete obj;
}