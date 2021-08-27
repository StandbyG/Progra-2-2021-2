#pragma once
#include <iostream>
//string -> Almacena cadena de caracteres
#include <string>

using namespace std;

//Access Level -> Protected, Private, Public

class Person {
private:
	//Atributos
	string name;
	int age;
	int DNI;
	char gender;
	int weight;
	int height;

public:
	//Metodos -> Funciones
	//Constructor -> Inicializar los valores de mis atributos
	//Default Constructor
	Person() {
		name = "Jose";
		age = 0;
		gender = 'M';
		generateDNI();
		weight = 0;
		height = 0;
		cout << "Person constructor have been executed" << endl;
	}

	Person(string name, int age, char gender) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		generateDNI();
		weight = 0;
		height = 0;
		cout << "Person constructor have been executed" << endl;
	}

	Person(string name, int age, char gender, int DNI, int height, int weight) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->DNI = DNI;
		this->height = height;
		this->weight = weight;
	}

	//Destructor
	~Person() {
		cout << "Person destructor have been executed" << endl;
	}

	//Get -> Obtener informacion
	string getName() { return name; }
	int getAge() { return age; }
	int getDNI() { return DNI; }
	char getGender() { return gender; }
	int getWeight() { return weight; }
	int getHeight() { return height; }

	//Set -> Asignar/Modificar valores
	void setName(string v) { name = v; }
	void setAge(int v) { age = v; }
	void setDNI(int v) { DNI = v; }
	void setGender(char v) { gender = v; }
	void setWeight(int v) { weight = v; }
	void setHeight(int v) { height = v; }

	void getPersonInfo();

	bool isAdult() {
		if (age >= 18) return true;
		else return false;
	}

	void generateDNI() {
		DNI = rand() % 9999999 + 10000000;
	}

	void validateGender() {
		if (gender != 'M' && gender != 'F') {
			gender = 'M';
		}
	}
};


void Person::getPersonInfo() {
	cout << "Person info: " << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "DNI: " << DNI << endl;
	cout << "Gender: " << gender << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
}

