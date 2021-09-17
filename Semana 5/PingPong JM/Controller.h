#pragma once
#include "Person.h"
#include "Ball.h"
#include <vector>

class Controller {
private:
	Person* p;
	vector<Ball*> balls; //Balls** arr; //int n;
	int cont;
	int contTotal;

public:
	Controller() {
		p = new Person();
		cont = 0;
		contTotal = 0;
		addBall();
		addBall();
		addBall();
		addBall();
	}

	void addBall() {
		Ball* b = new Ball();
		balls.push_back(b);
	}

	/*void addBall() {
		Ball* e = new Ball();
		Ball** aux = new Ball * [n + 1];

		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}

		aux[n] = e;

		n++;
		arr = aux;
	}*/

	void eraseEverything() {
		Console::SetCursorPosition(1, 1); cout << "         ";
		Console::SetCursorPosition(1, 2); cout << "         ";
		p->erase();

		for (int i = 0; i < balls.size(); i++) {
			balls[i]->erase();
		}
	}

	void moveEverything() { //Movimiento Automatico
		for (int i = 0; i < balls.size(); i++) {
			balls[i]->move();
		}
	}

	void drawEverything() {
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(1, 1); cout << "Cont: " << cont;
		Console::SetCursorPosition(1, 2); cout << "ContTotal: " << contTotal;

		p->draw();

		for (int i = 0; i < balls.size(); i++) {
			balls[i]->draw();
		}
	}

	int getNumBalls() { return balls.size(); }

	Person* getPerson() {
		return p;
	}

	void collision() {
		for (int i = 0; i < balls.size(); i++) {
			if (p->getRectangle().IntersectsWith(balls[i]->getRectangle())) {
				balls[i]->changeDirection();
				cont++;
				contTotal++;
			}
		}
	}

	void increaseBallsVelocity() {
		for (int i = 0; i < balls.size(); i++) {
			balls[i]->increaseVelocity();
		}
	}

	int getCont() { return cont; }
	void setCont(int v) { cont = v; }

	int getContTotal() { return contTotal; }
	void setContTotal(int v) { contTotal = v; }

};