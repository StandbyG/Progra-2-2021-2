#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
	string name;
	string lastName;
	int DNI;
	string address;

public:
	Person(){}

	Person(string name, string lastName, int DNI, string address) {
		this->name = name;
		this->lastName = lastName;
		this->DNI = DNI;
		this->address = address;
	}

	~Person(){}

	string getName() { return name; }
	string getLastName() { return lastName; }

	void getPersonInfo() {
		cout << "Name: " << name << endl;
		cout << "Last name: " << lastName << endl;
		cout << "DNI: " << DNI << endl;
		cout << "Address: " << address << endl;
	}


};