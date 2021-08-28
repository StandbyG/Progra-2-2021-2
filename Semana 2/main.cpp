#include "Person.h"
#include <conio.h>

int main() {
	srand(time(NULL));
	string newName;
	Person* p; // Declarando una variable dinamica de la clase Person, llamada p
	p = new Person("Gonzalo", 15, 'F', 150.23, 1.72); //Instanciar/Inicializar la variable p -> p se convierte en un objeto de la clase Person
	p->validateGender();
	p->getPersonInfo();

	cout << endl;
	cout << "The person is an adult: " << p->isAdult() << endl;
	cout << "Ideal wieght metric: " << p->calculateIMC() << endl;

	delete p;
	_getch();
	return 0;
}
