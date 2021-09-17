#pragma once
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Drawing;

class Ball {
private:
	int x, y;
	int dx, dy;
	int width, height;
	int rgb;

public:
	Ball() {
		x = rand() % 70;
		y = 5;
		dx = 1;
		dy = 1;
		width = 1;
		height = 1;
		rgb = rand() % 5;
	}

	~Ball(){}

	void erase() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

	void move() {

		if (x <= 3 || x + width >= 80) { 
			dx *= -1;
			changeColor();
		}

		if (y <= 3 || y + height >= 35)
		{
			dy *= -1;
			changeColor();
		}

		x += dx;
		y += dy;
	}

	void changeColor() {
		rgb = rand() % 5;
	}

	void draw() {
		switch (rgb)
		{
		case 0:
			Console::ForegroundColor = ConsoleColor::Cyan; break;
		case 1:
			Console::ForegroundColor = ConsoleColor::Green; break;
		case 2:
			Console::ForegroundColor = ConsoleColor::Yellow; break;
		case 3:
			Console::ForegroundColor = ConsoleColor::Magenta; break;
		case 4:
			Console::ForegroundColor = ConsoleColor::Gray; break;
		}

		Console::SetCursorPosition(x, y); cout << char(1);
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, width, height);
	}

	void changeDirection() {
		dy *= -1;
	}

	void increaseVelocity() {
		if (dx > 0)dx++;
		else dx--;

		if (dy > 0)dy++;
		else dy--;
	}
};