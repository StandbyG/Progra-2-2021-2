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

	void addMyRectangle(MyRectangle* m) {
		myRectangles.push_back(m);
	}

	void drawEverything(Graphics^ g) {
		for (int i = 0; i < circles.size(); i++) {
			circles[i]->draw(g);
		}

		for (int i = 0; i < myRectangles.size(); i++) {
			myRectangles[i]->draw(g);
		}
	}
};