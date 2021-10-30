#pragma once
#include "Obstacle.h"
#include <vector>

using namespace std;
using namespace System::Drawing;

class Hero {
private:
	int x, y;
	int dx, dy;
	int width, height;
	int idx, idy;
	int indexRec;


public:
	Hero(int width, int height) {
		x = 100;
		y = 300;
		dx = dy = 15;
		this->width = width;
		this->height = height;
		idx = idy = 0;
		indexRec = -1;
	}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Pen^ p = gcnew Pen(Color::Red, 3);
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
		//g->DrawRectangle(p, x, y, width * 1.0, height * 1.0);
	}

	void move(Graphics^ g, char i, vector<Obstacle*> obstacles) {
		switch (i)
		{
		case 'A':
			idy = 1;
			for (int i = 0; i < obstacles.size(); i++) {
				if (this->getRectangle(x - dx, y).IntersectsWith(obstacles[i]->getRectangle())) {
					indexRec = i;
					break;
				}
			}

			if (indexRec != -1) {
				if (x > 0 && !this->getRectangle(x - dx, y).IntersectsWith(obstacles[indexRec]->getRectangle())) {
					x -= dx;
				}
			}
			else {
				if (x > 0) {
					x -= dx;
				}
			}
			break;

		case 'D':
			idy = 2;
			for (int i = 0; i < obstacles.size(); i++) {
				if (this->getRectangle(x + dx, y).IntersectsWith(obstacles[i]->getRectangle())) {
					indexRec = i;
					break;
				}
			}

			if (indexRec != -1) {
				if (x + width * 1.0 < g->VisibleClipBounds.Width && !this->getRectangle(x + dx, y).IntersectsWith(obstacles[indexRec]->getRectangle())) {
					x += dx;
				}
			}
			else {
				if (x + width * 1.0 < g->VisibleClipBounds.Width) {
					x += dx;
				}
			}
			break;

		case 'W':
			idy = 3;
			for (int i = 0; i < obstacles.size(); i++) {
				if (this->getRectangle(x, y - dy).IntersectsWith(obstacles[i]->getRectangle())) {
					indexRec = i;
					break;
				}
			}

			if (indexRec != -1) {
				if (y > 0  && !this->getRectangle(x, y - dy).IntersectsWith(obstacles[indexRec]->getRectangle())) {
					y -= dy;
				}
			}
			else {
				if (y > 0 ) {
					y -= dy;
				}
			}
			break;

		case 'S':
			idy = 0;
			for (int i = 0; i < obstacles.size(); i++) {
				if (this->getRectangle(x, y + dy).IntersectsWith(obstacles[i]->getRectangle())) {
					indexRec = i;
					break;
				}
			}

			if (indexRec != -1) {
				if (y + height * 1.0 < g->VisibleClipBounds.Height && !this->getRectangle(x, y + dy).IntersectsWith(obstacles[indexRec]->getRectangle())) {
					y += dy;
				}
			}
			else {
				if (y + height * 1.0 < g->VisibleClipBounds.Height) {
					y += dy;
				}
			}
			break;
		}

		idx++;
		if (idx > 3)idx = 0;
	}

	~Hero(){}

	Rectangle getRectangle(int x, int y) {
		return Rectangle(x, y, width * 1.0, height * 1.0);
	}
};