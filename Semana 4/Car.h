#pragma once
#include <iostream>

using namespace std;
using namespace System;

class Car {
private:
	int x, y;
	int dx;
	int width, height;

public:
	Car() {
		x = rand() % 30 + 10;
		y = rand() % 11 + 10;
		dx = 2;
		width = 10;
		height = 2;
	}

	~Car(){}

	void erase() {
		Console::SetCursorPosition(x, y);     cout << "          ";
		Console::SetCursorPosition(x, y + 1); cout << "          ";
	}

	void move() {
		if (x <= 1 || x + width >= 100)dx *= -1;
		x += dx;
	}

	void draw() {
		if (dx > 0) {
			Console::SetCursorPosition(x, y);     cout << ".-'--`-._ ";
			Console::SetCursorPosition(x, y + 1); cout << "'-O---O--'";
		}
		else {
			Console::SetCursorPosition(x, y);     cout << " _.-`--'-.";
			Console::SetCursorPosition(x, y + 1); cout << "'--O---O-'";
		}
	}

	System::Drawing::Rectangle getRectangle() {
		return System::Drawing::Rectangle(x, y, width, height);
	}

};