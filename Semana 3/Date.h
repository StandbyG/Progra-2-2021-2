#pragma once
#include <string>
#include <iostream>

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
		year = rand() % 11 + 2010; // 0 - 10 + 2010
	}

	~Date(){}

	string getCompleteDate() {
		//dd/mm/yyyy
		string aux; //dd/mm/yyyy
		//Append ->encadenar datos en la variable string
		aux.append(to_string(day));
		aux.append("/");
		aux.append(to_string(month));
		aux.append("/");
		aux.append(to_string(year));

		return aux;
	}

};