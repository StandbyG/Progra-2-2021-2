#pragma once
#include "Figure.h"

class MyRectangle : public Figure {
public:
	MyRectangle(int x, int y) : Figure(x, y) {
		width = 50;
		height = 60;
	}

	~MyRectangle() {}

	void draw(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::Violet, 3);
		g->DrawRectangle(p, x, y, width, height);
	}
};