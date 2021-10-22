#pragma once
#include "Figure.h"

class MyDiamond : public Figure {
public:
	MyDiamond(int x, int y) : Figure(x, y) {
		width = 50;
		height = 50;
	}

	~MyDiamond() {}

	void draw(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::Tomato, 3);
		g->DrawLine(p, x + width / 2, y, x, y + height / 2);
		g->DrawLine(p, x, y + height / 2, x + width / 2, y + height);
		g->DrawLine(p, x + width / 2, y + height, x + width, y + height / 2);
		g->DrawLine(p, x + width, y + height / 2, x + width / 2, y);
	}
};