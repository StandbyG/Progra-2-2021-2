#pragma once
#include "Cat.h"
#include "Dog.h"
#include "Person.h"
#include <vector>

class Controller {
private:
	Person* person;
	vector<Cat*> cats;// Cat** arr; int n;
	vector<Dog*> dogs;
	bool paused;
	time_t stopTime;

public:
	Controller() {
		paused = false;
		person = new Person(40, 20);
		for (int i = 0; i < 2; i++) {
			cats.push_back(new Cat());
			dogs.push_back(new Dog());
		}
	}

	~Controller(){}

	void addCat() {
		cats.push_back(new Cat());
	}

	/*void addCat() {
		Cat* e = new Cat();
		Cat** aux = new Cat * [n + 1];

		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}

		aux[n] = e;

		n++;
		arr = aux;
	}*/

	void eraseEverything() {
		Console::SetCursorPosition(0, 0); cout << "                        ";
		person->erase();
		for (int i = 0; i < cats.size(); i++) {
			cats[i]->erase();
		}
		for (int i = 0; i < dogs.size(); i++) {
			dogs[i]->erase();
		}
	}

	void moveEverything() {
		for (int i = 0; i < cats.size(); i++) {
			cats[i]->moveAnimal();
		}
		for (int i = 0; i < dogs.size(); i++) {
			dogs[i]->moveAnimal();
		}
	}

	void drawEverything() {
		Console::SetCursorPosition(0, 0); cout << "Health Points: " << person->getHp();
		person->draw();
		for (int i = 0; i < cats.size(); i++) {
			cats[i]->draw();
		}
		for (int i = 0; i < dogs.size(); i++) {
			dogs[i]->draw();
		}
	}

	void unpause() {
		if (paused == true) {
			if (difftime(time(0), stopTime) > 2)paused = false;
		}
	}

	Person* getPerson() { return person; }
	bool getPaused() { return paused; }

	void collision() {
		for (int i = 0; i < cats.size(); i++) {
			if (person->getRectangle().IntersectsWith(cats[i]->getRectangle())) {
				paused = true;
				stopTime = time(0);
				person->decreaseHp();
				cats[i]->setX(rand() % 60 + 10);
				cats[i]->setY(rand() % 20 + 10);
			}
		}
		unpause();
	}


};