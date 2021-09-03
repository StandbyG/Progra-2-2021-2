#include <iostream>
#include <ctime>
#include <conio.h>
#include "ArrEclipse.h"
#include "Character.h"

using namespace std;

void Menu() {
    cout << "1. Add Eclipse" << endl;
    cout << "2. Edit Eclipse Type" << endl;
    cout << "3. Delete Eclipse" << endl;
    cout << "4. Print all Eclipses" << endl;
    cout << "5. Report Eclipses in Europe" << endl;
    cout << "6. Report Eclipses Earthquakes" << endl;
    cout << "7. Report Eclipses in the night" << endl << endl;
}

int main() {
   /* srand(time(NULL));
    int option, position;
    string type;
    ArrEclipse* arr = new ArrEclipse();

    while (1) {
        Menu();
        cout << "Input the option: "; cin >> option;
        switch (option) {
        case 1: arr->addEclipse(); cout << "Eclipse added" << endl; break;
        case 2:
            cout << "Input the position: "; cin >> position;
            cout << "Input the new value: "; cin >> type;
            arr->editEclipseType(position, type);
            cout << "Eclipse edited" << endl; break;
        case 3:
            arr->deleteEclipse(); cout << "Eclipse deleted" << endl; break;
        case 4: arr->printArray(); break;
        case 5: arr->eclipsesVisiblesEurope(); break;
        case 6: arr->eclipsesEarthquakes(); break;
        case 7: arr->eclipsesInTheNight(); break;
        }
        _getch();
        system("cls");
    }

    delete arr;*/

    Console::CursorVisible = false;

    Character* c = new Character();

    while (true) {
        c->erase();
        c->move();
        c->draw();
        _sleep(100);
    }

    _getch();
    return 0;
}