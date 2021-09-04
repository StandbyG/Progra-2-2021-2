#pragma once
#include <iostream>
#include <string>

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

	int getHour() { return hour; }

	string getCompleteTime() {
		//hh:mm:sec
		string aux;
		aux.append(to_string(hour));
		aux.append(":");
		aux.append(to_string(minute));
		aux.append(":");
		aux.append(to_string(second));

		return aux;
	}
};