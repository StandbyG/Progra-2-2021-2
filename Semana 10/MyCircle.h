#pragma once
#include "Figure.h"

class MyCircle : public Figure {
public:
	MyCircle(int x, int y) : Figure(x, y) {
		width = 50;
		height = 50;
	}

	~MyCircle(){}

	void draw(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::DarkSlateBlue, 3);
		g->DrawEllipse(p, x, y, width, height);
	}
};