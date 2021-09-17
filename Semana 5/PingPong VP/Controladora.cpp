#include "Controladora.h"
Controladora::Controladora()
{
	objM = new Monigote();
	objP = new Pelotas();
	cant_golpes = 0;

}
Controladora::~Controladora()
{
	delete objM, objP;
}
void Controladora::Desplazar_Monigote(char tecla, int Wventana, int Hventana)
{
	if (tecla == 'A') objM->Desplazar(direccion::izquierda);
	if (tecla == 'D') objM->Desplazar(direccion::derecha);
	objM->Mover(Wventana, Hventana);
}
void Controladora::Mover_Todos(int Wventana, int Hventana)
{
	objP->Mover(Wventana, Hventana);
	Colision();

}
bool Controladora::Colision()
{
	Rectangle r1;
	r1.X = objM->retornar_x();
	r1.Y = objM->retornar_y();
	r1.Width = objM->retornar_w();
	r1.Height = objM->retornar_h();
	bool resultado_colision = false;
	for (int i = 0; !resultado_colision && i < objP->retornar_nelementos(); i++)
	{
		Rectangle r2;
		r2.X = objP->retornar_pelota(i)->retornar_x();
		r2.Y = objP->retornar_pelota(i)->retornar_y();
		r2.Width = objP->retornar_pelota(i)->retornar_w();
		r2.Height = objP->retornar_pelota(i)->retornar_h();
		resultado_colision = r1.IntersectsWith(r2);
		if (resultado_colision == true)
		{
			//objP->retornar_pelota(i)->cambiar_dx(objP->retornar_pelota(i)->retornar_dx()*-1);
			objP->retornar_pelota(i)->cambiar_dy(objP->retornar_pelota(i)->retornar_dy() * -1);
			cant_golpes++;
			if ((cant_golpes % 30) == 0)  Insertar_Pelotas();
			if ((cant_golpes % 100) == 0)
			{
				for (int j = 0; j < objP->retornar_nelementos(); j++)
				{
					objP->retornar_pelota(j)->cambiar_dx(objP->retornar_pelota(j)->retornar_dx() * 2);
					objP->retornar_pelota(j)->cambiar_dy(objP->retornar_pelota(j)->retornar_dy() * 2);
				}
			}
		}
	}

	return resultado_colision;
	
}

int Controladora::retornar_cant_golpes()
{
	return cant_golpes;
}

void Controladora::Insertar_Pelotas()
{
	objP->Insertar();
}

bool Controladora::Termino()
{
	bool resultado = false;
	for (int i = 0; !resultado && i < objP->retornar_nelementos(); i++)
		resultado = objP->retornar_pelota(i)->retornar_choco_en_borde();
	return resultado;
}