#pragma once
#include "Monigote.h"
#include "Carros.h"
using namespace System::Drawing;
class Controladora
{
	private:
		Monigote* objM;
		Carros* objC;
	public:
		Controladora();
		~Controladora();
		void Desplazar_Monigote(char tecla);
		void InsertarCarros();
		void Mover(int Wventana, int Hventana);
		bool Colision();
		bool Gano();

};

