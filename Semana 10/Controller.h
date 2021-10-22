#pragma once
#include "MyCircle.h"
#include "MyDiamond.h"
#include "MyRectangle.h"

class Controller {
private:
	MyCircle* circle;
	MyRectangle* rectangle;
	MyDiamond* diamond;
	int cont;

public:
	Controller() {
		cont = 0;
		circle = new MyCircle(0, 10);
		rectangle = new MyRectangle(0, 110);
		diamond = new MyDiamond(0, 210);
	}

	~Controller() {}

	void drawEverything(Graphics^ g) {
		g->DrawLine(gcnew Pen(Color::Aquamarine, 5), 700, 0, 700, 300);
		circle->draw(g);
		rectangle->draw(g);
		diamond->draw(g);
	}

	void moveEverything() {
		if (circle->getArrive()) {
			circle->setPlace(++cont);
			if (circle->getPlace() == 1) circle->increaseVictory();
		}
		else circle->move();

		if (rectangle->getArrive()) {
			rectangle->setPlace(++cont);
			if (rectangle->getPlace() == 1) rectangle->increaseVictory();
		}
		else rectangle->move();

		if (diamond->getArrive()) {
			diamond->setPlace(++cont);
			if (diamond->getPlace() == 1) diamond->increaseVictory();
		}
		else diamond->move();
	}

	void again() {
		circle->setX(0);
		circle->setPlace(0); circle->setArrive(0);
		rectangle->setX(0);
		rectangle->setPlace(0); rectangle->setArrive(0);
		diamond->setX(0);
		diamond->setPlace(0); diamond->setArrive(0);

		cont = 0;
	}

	MyCircle* getCircle() { return circle; }
	MyRectangle* getRectangle() { return rectangle; }
	MyDiamond* getDiamond() { return diamond; }
};