#pragma once
#include "Circle.h"
#include "MyRectangle.h"
#include <vector>

using namespace std;

class Controller {
private:
	vector<Circle*> circles;
	vector<MyRectangle*> myRectangles;

public:
	Controller(){}
	~Controller(){}

	void addCircle(Circle* c) {
		circles.push_back(c);
	}

	void addMyRectangle(MyRectangle* r) {
		myRectangles.push_back(r);
	}

	void drawEverything(Graphics^ g, Color color) {
		for each (Circle* c in circles) {
			c->draw(g, color);
		}
		/*for (int i = 0; i < circles.size(); i++) {
			circles[i]->draw(g);
		}*/
		for each (MyRectangle * r in myRectangles) {
			r->draw(g, color);
		}

	}

};

