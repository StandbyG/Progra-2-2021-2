#include <conio.h>
#include "Controller.h"

int main() {
	srand(time(NULL));
	Console::SetWindowSize(85, 35);
	char key;
	
	Controller* controller = new Controller();

	controller->drawEverything();

	while (1) {
		Console::CursorVisible = false;

		//Erase
		controller->eraseEverything();

		//Collision
		controller->collision();

		if (controller->getCont() == 3) {
			controller->setCont(0);
			controller->addBall();
		}

		if (controller->getContTotal() == 10) {
			controller->setContTotal(0);
			controller->increaseBallsVelocity();
		}

		if (controller->getNumBalls() == 5) break;

		//Move
		controller->moveEverything();

		if (_kbhit()) { //Si se presiona una tecla
			key = _getch();
			key = toupper(key);
			controller->getPerson()->move(key);
		}
	

		//Draw
		controller->drawEverything();

		_sleep(100);
	}
	
	Console::Clear();
	
	cout << "GG WP" << endl;
	_getch();

	return 0;
}