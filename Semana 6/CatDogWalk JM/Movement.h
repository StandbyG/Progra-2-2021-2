#pragma once
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Drawing;

class Movement {
protected: //La clase padre y sus hijos tienen acceso a los atributos
	int x, y;
	int dx, dy;
	int width, height;

public:
	Movement() { //Este constructor lo planeo usar para los gatos y perros
		x = rand() % 60 + 10;
		y = rand() % 20 + 10;
	}

	Movement(int x, int y) { //Este constructor para el monigote
		this->x = x;
		this->y = y;
	}

	~Movement() {}

	void moveAnimal() {
		if (x <= 2 || x + width >= 78)dx *= -1;
		if (y <= 2 || y + height >= 38) dy *= -1;
		x += dx;
		y += dy;
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, width, height);
	}
	
	void setX(int v) { x = v; }
	void setY(int v) { y = v; }


};