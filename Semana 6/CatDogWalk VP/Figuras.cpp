#include "Figuras.h"

Figuras::Figuras(){
	n_elementos = new int;
	*n_elementos = 0;
	tiempo_inicio_app = time(0);
}
Figuras::~Figuras() {
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete[] arreglo;
	delete n_elementos;
}
void Figuras::Insertar_Perro() {
		Figura** auxiliar = new Figura * [*n_elementos + 1];
		for (int i = 0; i < *n_elementos; i++)
			auxiliar[i] = arreglo[i];
		auxiliar[*n_elementos] = new Perro();
		*n_elementos = *n_elementos + 1;
		arreglo = auxiliar;
}
void Figuras::Insertar_Gato() {
		Figura** auxiliar = new Figura * [*n_elementos + 1];
		for (int i = 0; i < *n_elementos; i++)
			auxiliar[i] = arreglo[i];
		auxiliar[*n_elementos] = new Gato();
		*n_elementos = *n_elementos + 1;
		arreglo = auxiliar;
}
void Figuras::Mover(int Wventana, int Hventana) {
	for (int i = 0; i < *n_elementos; i++)
	{
		if (arreglo[i]->retornar_tipo() == 1)
			((Perro*)arreglo[i])->Mover(Wventana, Hventana);
		if (arreglo[i]->retornar_tipo() == 2)
			((Gato*)arreglo[i])->Mover(Wventana, Hventana);
	}
}
int Figuras::retornar_elementos() {
	return *n_elementos;
}
Figura* Figuras::retonar_figura(int indice) {

	return arreglo[indice];

}