#pragma once
#include "Hero.h"
#include "Obstacle.h"
#include <vector>

using namespace std;

class Controller {
private:
	Hero* hero;
	vector<Obstacle*> obstacles;

public:
	Controller(Bitmap^ bmpHero) {
		hero = new Hero(bmpHero->Width / 4, bmpHero->Height / 4);
		obstacles.push_back(new Obstacle(315, 320, 300, 170));
		obstacles.push_back(new Obstacle(90, 75, 212, 165));
		obstacles.push_back(new Obstacle(620, 75, 212, 165));
	}

	~Controller() {}

	void drawEverything(Graphics^ g, Bitmap^ bmpHero) {

	/*	for each (Obstacle * r in obstacles)
		{
			r->draw(g);
		}*/

		hero->draw(g, bmpHero);
	}

	Hero* getHero() { return hero; }
	vector<Obstacle*> getMyRectangles() { return obstacles; }

};