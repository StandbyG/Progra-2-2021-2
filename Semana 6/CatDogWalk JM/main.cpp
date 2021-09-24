#include "Controller.h"
#include <conio.h>

int main() {
	srand(time(NULL));
	Console::SetWindowSize(100, 40);
	char key;
	Controller* controller = new Controller();

	while (1) {
		controller->eraseEverything();
		controller->collision();
		if (controller->getPerson()->getHp() == 0) break;
		if (_kbhit()) {
			key = _getch();
			key = toupper(key);
			controller->getPerson()->move(key, controller->getPaused());
		}
		controller->moveEverything();
		controller->drawEverything();

		_sleep(100);
	}

	cout << "GAME OVER" << endl;

	_getch();
	return 0;
}