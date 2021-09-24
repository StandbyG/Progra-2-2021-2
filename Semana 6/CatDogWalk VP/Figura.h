#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Figura
{

protected:
	int x, y, w, h,dx,dy;
	int tipo;
public:
	Figura();
	~Figura();
	int retornar_x();
	int retornar_y();
	int retornar_w();
	int retornar_h();
	void cambiar_x(int nuevo);
	void cambiar_y(int nuevo);
	void Borrar();
	int retornar_tipo();
};

