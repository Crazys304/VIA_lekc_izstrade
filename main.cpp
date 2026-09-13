#include <iostream>
using namespace std;

// Funkcija kas izvada visus braucējus
void printAll(string* names, int* points, int n) {
    for (int i = 0; i < n; i++)
        cout << names[i] << " - " << points[i] << " pts" << "\n";
}

// Funkcija kas atgriež braucēju ar visvairāk punktiem
int findMaxIndex(int* points, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (points[i] > points[maxIndex]) maxIndex = i;
    return maxIndex;
}

// Funkcija kas atgriež braucēju ar vismazāk punktiem
int findMinIndex(int* points, int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++)
        if (points[i] < points[minIndex]) minIndex = i;
    return minIndex;
}

// Funkcija kas aprēķina vidējo punktu skaitu
double average(int* points, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += points[i];
    return (double)sum / n;
}

// Funkcija kas pārbauda, vai vārds jau ir izmantots iepriekš
bool isNameTaken(string* names, int count, string newName) {
    for (int i = 0; i < count; i++)
        if (names[i] == newName) return true;
    return false;
}

int main() {
    const int MAX_DRIVERS = 4;
    string* names = new string[MAX_DRIVERS]; // Braucēju vārdu arrays
    int* points = new int[MAX_DRIVERS]; // Punktu arrays

    cout << "=== F1 Rezultati ===" << endl;

    // Ievada vārdu un punktus katram braucējam
    for (int i = 0; i < MAX_DRIVERS; i++) {
        cout << "Ievadi pilota vardu: " << "\n";
        cin >> names[i];
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
    cout << "========================" << "\n";
    printAll(names, points, MAX_DRIVERS);
    cout << names[findMaxIndex(points, MAX_DRIVERS)] << " ir lideris" << "\n";
    cout << names[findMinIndex(points, MAX_DRIVERS)] << " Ir pedejais" << "\n";
    cout << "Videjie punkti: " << average(points, MAX_DRIVERS) << endl;

    delete[] names;
    delete[] points;
    return 0;
}