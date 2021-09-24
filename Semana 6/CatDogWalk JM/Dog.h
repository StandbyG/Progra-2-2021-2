#pragma once
#include "Movement.h"

class Dog : public Movement {
public:
	Dog() : Movement() {
		dx = 2;
		dy = 2;
		width = 12;
		height = 4;
	}

	~Dog(){}

	void erase() {
		Console::SetCursorPosition(x, y);     cout << "           ";
		Console::SetCursorPosition(x, y + 1); cout << "           ";
		Console::SetCursorPosition(x, y + 2); cout << "           ";
		Console::SetCursorPosition(x, y + 3); cout << "           ";
	}

	void draw() {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x, y);     cout << "       __  ";
		Console::SetCursorPosition(x, y + 1); cout << "  (___()'`;";
		Console::SetCursorPosition(x, y + 2); cout << " /,    /`  ";
		Console::SetCursorPosition(x, y + 3); cout << "\\''--\\   ";
	}
};