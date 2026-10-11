#include <iostream>
#include "functions.h"
using namespace std;

// Galvenā funkcija - ievade/izvade un salīdzina pilotu datus
int main() {
    const int MAX_DRIVERS = 4;
    string* names = new string[MAX_DRIVERS]; // Braucēju vārdu arrays
    int* points = new int[MAX_DRIVERS]; // Punktu arrays

    cout << "=== F1 Rezultati ===" << endl;

    // Ievada vārdu un punktus katram braucējam
    for (int i = 0; i < MAX_DRIVERS; i++) {
        cout << "Ievadi pilota vardu: " << "\n";
        cin >> names[i];

        // Pārbauda, vai vārds nesatur ciparus vai citas rakstzīmes
        while (!isValidName(names[i])) {
            cout << "Varda nedrikst but cipari, megini velreiz: " << "\n";
            cin >> names[i];
        }

        // Pārbauda, vai vārds nav jau izmantots
        while (isNameTaken(names, i, names[i])) {
            cout << "Sis vards jau ir izmantots, megini citu" << "\n";
            cin >> names[i];
        }

        cout << "Ievadi punktus: " << "\n";
        cin >> points[i];
        // Ja punkti nav derīgs skaitlis, liks ievadīt vēlreiz
        while (!cin.good()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Nederiga ievade, megini velreiz: " << "\n";
            cin >> points[i];
        }
    }

    // Izvade
    cout << "\n";
    cout << "========================" << "\n";
    printAll(names, points, MAX_DRIVERS);
    cout << names[findMaxIndex(points, MAX_DRIVERS)] << " ir lideris" << "\n";
    cout << names[findMinIndex(points, MAX_DRIVERS)] << " ir pedejais" << "\n";
    cout << "Videjie punkti: " << average(points, MAX_DRIVERS) << endl;
    cout << "========================" << "\n";

    delete[] names;
    delete[] points;
    return 0;
}