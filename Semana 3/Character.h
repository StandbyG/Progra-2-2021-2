#pragma once
#include <iostream>

using namespace System;
using namespace std;

class Character {
private:
	int x, y;
	int dx, dy;
	int i;

public:
	Character(int i) {
		this->i = i;
		x = rand() % 30 + 10;;
		y = rand() % 15 + 10;
		dx = 2;
		dy = 2;
	}

	~Character(){}

	//Borrar/mover/dibujar
	void erase() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

	void move() {
		int r = rand() % 4;
		switch (i)
		{
		case 0:
			if (x > 70 || x < 5)dx *= -1;
			if (y > 30 || y < 5)dy *= -1;
			x += dx;
			y += dy;
			break;

		case 1:
			if (x > 70 || x < 5)dx *= -1;
			x += dx;
			break;

		case 2:
			if (y > 30 || y < 5)dy *= -1;
			y += dy;
			break;

		case 3:
			if (r == 0 && x < 80) x += dx;
			if (r == 1 && x > 5) x -= dx;
			if (r == 2 && y < 30) y += dy;
			if (r == 3 && y > 5) y -= dy;
		}

		
	}

	void draw() {
		Console::SetCursorPosition(x, y); cout << "*";
	}

};