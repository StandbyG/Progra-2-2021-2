#pragma once
#include <string>
#include <iostream>

using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;

public:
	Time() {
		hour = rand() % 24;
		minute = rand() % 60;
		second = rand() % 60; 
	}

	~Time() {}

	string getCompleteTime() {
		string aux; //hh:mm:ss
		//Append ->encadenar datos en la variable string
		aux.append(to_string(hour));
		aux.append(":");
		aux.append(to_string(minute));
		aux.append(":");
		aux.append(to_string(second));

		return aux;
	}

	int getHour() { return hour; }
};