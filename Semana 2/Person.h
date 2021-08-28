#pragma once
#include <string>
#include <iostream>

using namespace std;
//Access Level -> Protected, Private, Public

class Person {
private:
	//Atributos
	string name;
	int age;
	int DNI;
	char gender;
	double weight;
	double height;

public:
	//Metodos -> Funciones
	//Contructor -> Inicializa los valores de los atributos
	//Default Constructor
	//Sobrecarga de constructores -> No se pueden crear mas de 1 constructor
	//con el mismo orden de los parametros, causa conflicto entre ellos y te explota el pc 
	Person() {
		name = "";
		age = 0;
		generateDNI();
		gender = 'M';
		weight = 0.0;
		height = 0.0;
		cout << "Constructor have been executed" << endl;
	}

	Person(string name, int age, char gender) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		generateDNI();
		weight = 0.0;
		height = 0.0;
		cout << "Constructor have been executed" << endl;
	}

	Person(string name, int age, char gender, double weight, double height) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		generateDNI();
		this->height = height;
		this->weight = weight;
		cout << "Constructor have been executed" << endl;
	}

	//Destructor
	~Person(){
		cout << "Destructor have been executed" << endl;
	}

	//Get -> Obtener informacion
	string getName();
	int getAge();
	int getDNI();
	char getGender() { return gender; }
	double getWeight() { return weight; }
	double getHeight() { return height; }

	//Set -> Asignar/Modificar Valores
	void setName(string v) { name = v; }
	void setAge(int v) { age = v; }
	void setDNI(int v) { DNI = v; }
	void setGender(char v) { gender = v; }
	void setWeight(double v) { weight = v; }
	void setHeight(double v) { height = v; }

	void getPersonInfo() {
		cout << "Person info" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "DNI: " << DNI << endl;
		cout << "Gender: " << gender << endl;
		cout << "Height: " << height << endl;
		cout << "Weight: " << weight << endl;
	}

	bool isAdult() {
		if (age >= 18) return true;
		else return false;
	}
		 
	void validateGender() {
		if (gender != 'M' && gender != 'F') {
			gender = 'M';
		}
	}

	void generateDNI() {
		DNI = rand() % 9999999 + 10000000;
	}

	int calculateIMC() {
		double idealWeight = weight / (height * height);

		if (idealWeight < 20) return -1;
		if (idealWeight >= 20 && idealWeight <= 25) return 0;
		if (idealWeight > 25) return 1;
	}


};