#pragma once
#include <iostream>

using namespace std;
using namespace System;

class Person {
private:
	int x, y; // Coordenadas
	int dx, dy; // Desplazamiento
	int height, width; 

public:
	Person() {
		x = 50;
		y = 5;
		dx = 1;
		dy = 1;
		width = 1;
		height = 2;
	}

	~Person(){}

	//Movement Algorithm
	//Erase - Move - Draw
	void erase() {
		Console::SetCursorPosition(x, y); cout << " ";
		Console::SetCursorPosition(x, y + 1); cout << " ";
	}

	void move(char index) {
		switch (index)
		{
		case 'A':
			if (x > 1)x -= dx; break;
		case 'D':
			if (x + width < 100) x += dx; break;
		case 'W':
			if (y > 1)y -= dy; break;
		case 'S':
			if (y + height < 35) y += dy; break;
		}
	}

	void draw() {
		Console::SetCursorPosition(x, y); cout << "0";
		Console::SetCursorPosition(x, y + 1); cout << char(197);
	}

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }

	System::Drawing::Rectangle getRectangle() {
		return System::Drawing::Rectangle(x, y, width, height);
	}
};