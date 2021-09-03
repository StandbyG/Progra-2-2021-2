#pragma once
#include <iostream>

using namespace std;
using namespace System;

class Character {
private:
	int x, y; //coordenadas
	int dx; //desplazamiento en x -> desplazamiento horizontal

public:
	Character() {
		x = 25;
		y = 25;
		dx = 1;
	}

	~Character(){}

	//Erase/Move/Draw
	void erase() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

	void move() {
		if (x > 80 || x < 5) dx = dx * -1;
		x += dx; //movimiento constante
	}

	void draw() {
		Console::SetCursorPosition(x, y); cout << "*";
	}

};