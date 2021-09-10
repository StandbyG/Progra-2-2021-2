#include <conio.h>
#include "Controller.h"

int main() {
	srand(time(NULL));
	Console::SetWindowSize(100, 35);
	char key;
	
	Controller* controller = new Controller();
	controller->drawEverything();

	while (true) {
		Console::CursorVisible = false;

		controller->eraseEverything();
		if (controller->collision()) break;

		if (_kbhit()) { // Estoy preguntando si se ha presionado una tecla
			key = _getch(); // El valor de la tecla se le asignara a "key"
			key = toupper(key); // El valor de "key" se vuelve mayuscula

			if (key == 'C')controller->addCar();
			controller->getP()->move(key);
		}

		controller->moveEverything();
		controller->drawEverything();		

		_sleep(75);
	}

	cout << " Game Over";

	_getch();
	return 0;
}