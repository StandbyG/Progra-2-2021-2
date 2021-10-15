#pragma once
#include <iostream>

using namespace System::Drawing;

class Circle {
private:
	int x, y;
	int radio;

public:
	Circle(int x, int y, int radio) {
		this->x = x;
		this->y = y;
		this->radio = radio;
	}

	~Circle(){}

	void draw(Graphics^ g) { //Graphics -> Lienzo donde vamos a dibujar
		Pen^ p = gcnew Pen(Color::FromArgb(rand() % 255, rand() % 255, rand() % 255), 5);
		g->DrawEllipse(p, x, y, 2 * radio, 2 * radio);
	}

	double getArea() {
		return 3.14 * radio * radio;
	}


};