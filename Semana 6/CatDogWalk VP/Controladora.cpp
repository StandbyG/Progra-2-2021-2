#include "Controladora.h"
Controladora::Controladora()
{	objM = new Monigote();
	objPG = new Figuras();
	inmovil = false;
	tiempo_inicio_app_p= time(0); //perro
	tiempo_inicio_app_g=time(0); //gato
}
Controladora::~Controladora()
{	delete objM, objPG;}
void Controladora::Desplazar_Monigote(char tecla)
{
	if (tecla == 'A') objM->Desplazamiento(direccion::izquierda);
	if (tecla == 'D') objM->Desplazamiento(direccion::derecha);
	if (tecla == 'W') objM->Desplazamiento(direccion::arriba);
	if (tecla == 'S') objM->Desplazamiento(direccion::abajo);
}
void Controladora::Mover_Todos(int Wventana, int Hventana)
{	Console::SetCursorPosition(1, 1);
	cout << "Cantidad de Vidas: " << objM->retornar_cantvidas();
	if (!inmovil)
		objM->Mover(Wventana, Hventana);
	else 
		objM->Imprimir();

	objPG->Mover(Wventana, Hventana);
	Colision();
	Inmovil_2Segundos();
}
bool Controladora::Colision()
{	Rectangle r1 = Rectangle(objM->retornar_x(), objM->retornar_y(), objM->retornar_w(), objM->retornar_h());
	bool resultado_colision = false;
	for (int i = 0; !resultado_colision  && i < objPG->retornar_elementos(); i++)
	{	if (objPG->retonar_figura(i)->retornar_tipo() == 2)
		{	Rectangle r2 = Rectangle(objPG->retonar_figura(i)->retornar_x(), objPG->retonar_figura(i)->retornar_y(),
				objPG->retonar_figura(i)->retornar_w(), objPG->retonar_figura(i)->retornar_h());
			resultado_colision = r1.IntersectsWith(r2);
			if (resultado_colision)
			{	inmovil = true;
				tiempo_inicio_app = time(0);
				objPG->retonar_figura(i)->Borrar();
				objPG->retonar_figura(i)->cambiar_x(5 + rand() % 80);
				objPG->retonar_figura(i)->cambiar_y(5 + rand() % 40);
				objM->cambiar_cantvidas(objM->retornar_cantvidas() - 1);
			}
		}
	}
	return resultado_colision;
}
void Controladora::Inmovil_2Segundos()
{	if (difftime(time(0), tiempo_inicio_app) > 2)
		inmovil = false;
}
bool Controladora::TieneVidas(){	return objM->retornar_cantvidas() > 0; }
void Controladora::Insertar_PerrosGatos()
{	
	if (difftime(time(0), tiempo_inicio_app_p) > 1)
	{	objPG->Insertar_Perro();
		tiempo_inicio_app_p = time(0);
	}
	if (difftime(time(0), tiempo_inicio_app_g) > 2)
	{	objPG->Insertar_Gato();
		tiempo_inicio_app_g = time(0);
	}
}