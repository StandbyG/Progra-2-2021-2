#include "Carros.h"

Carros::Carros()
{
	n_elementos = new int;
	*n_elementos = 0;
	tiempo_inicio_app = time(0);
}
void Carros::Insertar()
{
	time_t tiempo_actual = time(0);

	if (difftime(tiempo_actual, tiempo_inicio_app) > 3)
	{
		Carro** auxiliar = new Carro * [*n_elementos + 1];
		for (int i = 0; i < *n_elementos; i++)
			auxiliar[i] = arreglo[i];
		auxiliar[*n_elementos] = new Carro();
		*n_elementos = *n_elementos + 1;
		arreglo = auxiliar;

		tiempo_inicio_app = time(0);
	}
}
void Carros::Mover(int Wventana, int Hventana)
{
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Mover(Wventana, Hventana);
}
Carros::~Carros()
{
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete[] arreglo;
	delete n_elementos;
}
void Carros::Eliminar()
{	int contador = 0;
	for (int i = 0; i < *n_elementos; i++)
		if (arreglo[i]->retornar_eliminar()==true)
			contador++;
	Carro** auxiliar = new Carro * [*n_elementos - contador];
	int j = 0;
	for (int i = 0; i < *n_elementos; i++)
	{
		if (arreglo[i]->retornar_eliminar() == false)
		{
			auxiliar[j] = arreglo[i];
			j++;
		}
		else
			arreglo[i]->Borrar();
	}
	*n_elementos = *n_elementos - contador;
	arreglo = auxiliar;
}

int Carros::retornar_nelementos()
{
	return *n_elementos;
}

Carro* Carros::retornar_carro(int indice)
{
	return arreglo[indice];
}

