#include <conio.h>
#include <iostream>
#include <ctime>

using namespace std;

void generateData(int *myArray, int n) {
	for (int i = 0; i < n; i++) {
		myArray[i] = rand() % 101;
	}
}

void printArray(int *myArray, int n) {
	for (int i = 0; i < n; i++) {
		cout << myArray[i] << " ";
	}

	cout << endl;
}

void findMajorNumber(int* myArray, int n) {
	int major = 0;
	int position = -1;

	for (int i = 0; i < n; i++) {
		if (myArray[i] > major) {
			major = myArray[i];
			position = i;
		}
	}

	cout << "The major number in the array is: " << major << " and it's position is: " << position << endl;
}

void findMinorNumber(int* myArray, int n) {
	int minor = 100;
	int position = -1;

	for (int i = 0; i < n; i++) {
		if (myArray[i] < minor) {
			minor = myArray[i];
			position = i;
		}
	}

	cout << "The minor number in the array is: " << minor << " and it's position is: " << position << endl;
}

void bubbleSort(int* myArray, int n) {
	int aux;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (myArray[j] < myArray[j + 1]) {
				aux = myArray[j];
				myArray[j] = myArray[j + 1];
				myArray[j + 1] = aux;
			}
		}
	}
}

void percentageMajorAndMinorFifty(int *myArray, int n) {
	int majorCounter = 0;
	int minorCounter = 0;

	double majorPercentage, minorPercentage;

	for (int i = 0; i < n; i++) {
		if (myArray[i] <= 50) {
			minorCounter++;
		}
		else {
			majorCounter++;
		}
	}

	majorPercentage = double(majorCounter) * 100.0 / n;
	minorPercentage = double(minorCounter) * 100.0 / n;

	cout << "The percentage of numbers major fifty is: " << majorPercentage << "%" << endl;
	cout << "The percentage of numbers minor fifty is: " << minorPercentage << "%" << endl;
}

void showAverageNumber(int* myArray, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += myArray[i];
	}

	cout << "The average number is: " << double(sum) / n << endl;
}

int main() {
	srand(time(NULL));
	int n = 10;
	int* myArray = new int[n];

	generateData(myArray, n);
	printArray(myArray, n);
	cout << endl;

	findMajorNumber(myArray, n);
	findMinorNumber(myArray, n);

	cout << endl;
	cout << "Array Sorted" << endl;
	bubbleSort(myArray, n);
	printArray(myArray, n);
	cout << endl;
	showAverageNumber(myArray, n);
	cout << endl;
	percentageMajorAndMinorFifty(myArray, n);

	
	_getch();
	return 0;
}