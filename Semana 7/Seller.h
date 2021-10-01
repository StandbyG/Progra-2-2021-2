#pragma once
#include "Employee.h"
#include "Car.h"


class Seller : public Employee {
private:
	Car car;
	vector<Person*> clients; //Person** clients, int nclients;
	int comissionPercentage;

public:
	Seller(){}

	Seller(string name, string lastName, int DNI, string address, int phone, int salary) : 
		Employee (name, lastName, DNI, address, phone, salary){
		car = Car();
		comissionPercentage = 5;
		incrementPercentage = 10;
	}

	~Seller(){}

	void getSellerInfo() {
		getEmployeeInfo();
		cout << "Car info: " << endl;
		car.getCarInfo();
		if (clients.size() > 0) {
			cout << "The names of the clients is/are: " << endl;
			for (int i = 0; i < clients.size(); i++) {
				cout << clients[i]->getName() << " " << clients[i]->getLastName() << endl;
			}
		}
		cout << "Commission percentage: " << comissionPercentage << endl;
	}

	void addClient(Person* p) {
		clients.push_back(p);
	}

	void deleteLastClient() {
		clients.pop_back();
	}

	void changeCar() {
		car = Car();
	}


};