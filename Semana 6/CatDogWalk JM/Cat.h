#pragma once
#include "Movement.h"

class Cat : public Movement {
public:
	Cat() : Movement() {
		dx = 1;
		dy = 1;
		width = 8;
		height = 3;
	}

	~Cat() {}

	void erase() {
		Console::SetCursorPosition(x, y);     cout << "       ";
		Console::SetCursorPosition(x, y + 1); cout << "       ";
		Console::SetCursorPosition(x, y + 2); cout << "       ";
	}

	void draw() {
		Console::ForegroundColor = ConsoleColor::Cyan;
		Console::SetCursorPosition(x, y);     cout << " /\_/\ ";
		Console::SetCursorPosition(x, y + 1); cout << "( o.o )";
		Console::SetCursorPosition(x, y + 2); cout << " > ^ < ";
	}
};