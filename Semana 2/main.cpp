#include "Person.h"
#include <conio.h>

int main() {
	srand(time(NULL));
	Person* p; // Declarando una variable dinamica de la clase Person, llamada p
	p = new Person("Juan Diego", 17, 'M'); // Instanciar la variable p -> p se convierte en un OBJETO DE LA CLASE PERSON

	p->validateGender();

	p->getPersonInfo();
	cout << "Is this person an adult: " << p->isAdult() << endl;

	delete p;
	_getch();
	return 0;
}