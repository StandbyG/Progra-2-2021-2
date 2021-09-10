#include "Controladora.h"

Controladora::Controladora()
{
	objM = new Monigote();
	objC = new Carros();
}
Controladora::~Controladora()
{
	delete objM, objC;
}
void Controladora::Desplazar_Monigote(char tecla)
{
	if (tecla == 'W') objM->Desplazamiento(direccion::arriba);
	if (tecla == 'A') objM->Desplazamiento(direccion::izquierda);
	if (tecla == 'S') objM->Desplazamiento(direccion::abajo);
	if (tecla == 'D') objM->Desplazamiento(direccion::derecha);
}
void Controladora::InsertarCarros()
{
	objC->Insertar();
	objC->Eliminar();
}
void Controladora::Mover(int Wventana, int Hventana)
{
	objM->Mover(Wventana, Hventana);
	objC->Mover(Wventana, Hventana);
}

bool Controladora::Colision()
{
	Rectangle r1;
	r1.X = objM->retonar_x();
	r1.Y = objM->retonar_y();
	r1.Width = objM->retonar_w();
	r1.Height = objM->retonar_h();
	bool resultado_colision = false;
	for (int i = 0;!resultado_colision && i < objC->retornar_nelementos();i++)
	{
		Rectangle r2;
		r2.X = objC->retornar_carro(i)->retonar_x();
		r2.Y = objC->retornar_carro(i)->retonar_y();
		r2.Width = objC->retornar_carro(i)->retonar_w();
		r2.Height= objC->retornar_carro(i)->retonar_h();

		resultado_colision=r1.IntersectsWith(r2);
	}
	//if (resultado_colision==true)
		//resto vidas al monigote
	return resultado_colision;
}
bool Controladora::Gano()
{
	bool gano = false;
	if (objM->retonar_y() + objM->retonar_h() > 47)
		gano = true;
	return gano;
}