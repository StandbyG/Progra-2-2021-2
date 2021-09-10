#pragma once
#include "Car.h"
#include "Person.h"
#include <vector>

using namespace std;

class Controller {
private:
	Person* p;
	vector<Car*> cars;

public:
	Controller() {
		p = new Person();
		for (int i = 0; i < 5; i++) {
			addCar();
		}
	}

	~Controller() {}

	void addCar() {
		Car* c = new Car();
		cars.push_back(c);
	}

	void eraseEverything() {
		for (int i = 0; i < cars.size(); i++) {
			cars[i]->erase();
		}

		p->erase();
	}
	
	void moveEverything() { //Mueve todo aquello que sea automatico
		for (int i = 0; i < cars.size(); i++) {
			cars[i]->move();
		}
	}

	void drawEverything() {
		for (int i = 0; i < cars.size(); i++) {
			cars[i]->draw();
		}

		p->draw();
	}

	bool collision() {
		for (int i = 0; i < cars.size(); i++) {
			if (p->getRectangle().IntersectsWith(cars[i]->getRectangle())) {
				return true;
			}
		}

		return false;
	}

	Person* getP() { return p; }
};