#pragma once
#include <iostream>
#include "Figura.h"
using namespace std;
using namespace System;
class Perro : public Figura
{
	public:
		Perro();
		~Perro();
        void Imprimir();
        void Mover(int Wventana, int Hventana);
};

