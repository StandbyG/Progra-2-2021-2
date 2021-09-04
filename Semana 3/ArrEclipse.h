#pragma once
#include "Eclipse.h"

class ArrEclipse {
private:
	int n;
	Eclipse** arr;

public:
	ArrEclipse() {
		n = 0;
		arr = new Eclipse * [n];
	}

	~ArrEclipse(){}

	void addEclipse() {
		Eclipse* e = new Eclipse();
		Eclipse** aux = new Eclipse * [n + 1];

		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}

		aux[n] = e;

		n++;
		arr = aux;
	}

	void editEclipseType(int position, string newType) {
		arr[position]->setType(newType);
	}

	void deleteEclipse() {
		Eclipse** aux = new Eclipse * [n - 1];

		for (int i = 0; i < n - 1; i++) {
			aux[i] = arr[i];
		}

		n--;
		arr = aux;
	}

	void eclipsesVisiblesEurope() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getVisibility() == "Europe") {
				arr[i]->printData();
			}
		}
	}

	void eclipsesEarthquakes() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getEarthquake() == "Yes") {
				arr[i]->printData();
			}
		}
	}

	void eclipsesInTheNight() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getHour() >= 18) {
				arr[i]->printData();
			}
		}
	}

	void printArray() {
		for (int i = 0; i < n; i++) {
			cout << endl;
			cout << "Eclipse " << i << endl;
			arr[i]->printData();
		}
	}

};