#pragma once
#include "Person.h"
#include <vector>

class Employee : public Person {
protected:
	int yearsWorked;
	int phone;
	int salary;
	int incrementPercentage; //5%

	Employee* supervisor;

public:
	Employee(){}

	Employee(string name, string lastName, int DNI, string address, int phone, int salary) :
		Person(name, lastName, DNI, address) {
		this->phone = phone;
		this->salary = salary;
		yearsWorked = rand() % 11;
		supervisor = NULL;
	}

	~Employee(){}

	void getEmployeeInfo() {
		getPersonInfo();
		cout << "Years worked: " << yearsWorked << endl;
		cout << "Phone: " << phone << endl;
		cout << "Salary: " << salary << endl;

		if (supervisor != NULL) {
			cout << "Supervisor: " << supervisor->getName() << " " << supervisor->getLastName() << endl;
		}
		else {
			cout << "Supervisor: " << "No supervisor assigned" << endl;
		}
	}

	void setSupervisor(Employee* newSupervisor) {
		supervisor = newSupervisor;
	}

	void increaseSalary() {
		salary += double(incrementPercentage) / 100 * salary;
	}
};