#pragma once
#include <iostream>

using namespace System::Drawing;

class MyRectangle {
private:
	int x, y;
	int side1, side2;

public:
	MyRectangle(int x, int y, int side1, int side2) {
		this->x = x;
		this->y = y;
		this->side1 = side1;
		this->side2 = side2;
	}

	~MyRectangle() {}

	void draw(Graphics^ g) { //Graphics -> Lienzo donde vamos a dibujar
		Pen^ p = gcnew Pen(Color::FromArgb(rand() % 255, rand() % 255, rand() % 255), 5);
		g->DrawRectangle(p, x, y, side1, side2);
	}

	double getArea() {
		return side1 * side2;
	}


};