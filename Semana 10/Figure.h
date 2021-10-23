#pragma once
#include <iostream>

using namespace System::Drawing;

class Figure {
protected:
	int x, y;
	int width, height;

	bool arrive;
	int place;
	int victories;

public:
	Figure(int x, int y) {
		this->x = x;
		this->y = y;
		arrive = false;
		place = 0;
		victories = 0;
	}
	
	~Figure(){}

	virtual void draw(Graphics^ g) = 0;

	void move() {
		if (x + width <= 700) x += rand() % 10 + 5;
		else arrive = true;
	}

	int getX() { return x; }
	int getY() { return y; }
	bool getArrive() { return arrive; }
	int getVictories() { return victories; }
	int getPlace() { return place; }

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	void setArrive(bool v) { arrive = v; }
	void setVictories(int v) { victories = v; }
	void setPlace(int v) { place = v; }
	void increaseVictory() { victories++; }




};