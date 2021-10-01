#pragma once
#include "Employee.h"
#include "Secretary.h"
#include "Seller.h"
#include "Car.h"

class ZoneLeader : public Employee {
private:
	int officeNumber;
	Secretary* secretary;
	vector<Seller*> sellers;
	Car car;

public:
	ZoneLeader(){}

	ZoneLeader(string name, string lastName, int DNI, string address, int phone, int salary, Secretary* secretary) : 
		Employee(name, lastName, DNI, address, phone, salary) {
		officeNumber = rand() % 101;
		secretary->setSupervisor(this);
		this->secretary = secretary;
		car = Car();
		incrementPercentage = 20;
	}

	~ZoneLeader(){}

	void getZoneLeaderInfo() {
		getEmployeeInfo();
		cout << "Office number: " << officeNumber << endl;
		cout << "Secretary: " << secretary->getName() << " " << secretary->getLastName() << endl;
		if (sellers.size() > 0) {
			cout << "My sellers is/are:" << endl;
			for (int i = 0; i < sellers.size(); i++) {
				cout << sellers[i]->getName() << " " << sellers[i]->getLastName() << endl;
			}
		}
		cout << "Car info: " << endl;
		car.getCarInfo();
	}

	void changeSecretary(Secretary* newSecretary) {
		newSecretary->setSupervisor(this);
		secretary = newSecretary;
	}

	void changeCar() {
		car = Car();
	}

	void addSeller(Seller* s) {
		s->setSupervisor(this);
		sellers.push_back(s);
	}

	void deleteLastSeller() {
		sellers.pop_back();
	}

};