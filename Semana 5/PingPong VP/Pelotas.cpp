#include "Pelotas.h"
Pelotas::Pelotas() {
	n_elementos = new int;
	*n_elementos = 0;

}
Pelotas::~Pelotas() {
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete[] arreglo;
	delete n_elementos;
}
void Pelotas::Insertar() {
	
	Pelota** auxiliar = new Pelota * [*n_elementos + 1];
		for (int i = 0; i < *n_elementos; i++)
			auxiliar[i] = arreglo[i];
		auxiliar[*n_elementos] = new Pelota();
		*n_elementos = *n_elementos + 1;
		arreglo = auxiliar;


}
void Pelotas::Mover(int Wventana, int Hventana) {
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Mover(Wventana, Hventana);
}

int Pelotas::retornar_nelementos()
{
	return *n_elementos;
}
Pelota* Pelotas::retornar_pelota(int indice)
{
	return arreglo[indice];
}

