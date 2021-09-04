#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int day;
	int month;
	int year;

public:
	Date() {
		day = rand() % 30 + 1;
		month = rand() % 12 + 1;
		year = rand() % 22 + 2000;
	}

	~Date(){}

	string getCompleteDate() {
		//dd/mm/yyyy
		string aux; 
		aux.append(to_string(day));
		aux.append("/");
		aux.append(to_string(month));
		aux.append("/");
		aux.append(to_string(year));

		return aux;
	}
};