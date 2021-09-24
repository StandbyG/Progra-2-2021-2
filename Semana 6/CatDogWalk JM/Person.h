#pragma once
#include "Movement.h"

class Person : public Movement {
private:
	int hp; //Health Points -> Puntos de Vida

public:
	Person(int x, int y) : Movement(x, y) {
		hp = 5;
		dx = 2;
		dy = 1;
		width = 1;
		height = 2;
	}

	~Person() {}

	void erase() {
		Console::SetCursorPosition(x, y);     cout << " ";
		Console::SetCursorPosition(x, y + 1); cout << " ";
	}

	void move(char index, bool paused) {
		if (!paused) {
			switch (index)
			{
			case 'A':
				if (x >= 2) x -= dx; break;
			case 'D':
				if (x + width <= 78) x += dx; break;
			}
		}
	}

	void draw() {
		Console::SetCursorPosition(x, y);     cout << "@";
		Console::SetCursorPosition(x, y + 1); cout << char(197);
	}

	int getHp() { return hp; }
	void decreaseHp() { hp--; }

};