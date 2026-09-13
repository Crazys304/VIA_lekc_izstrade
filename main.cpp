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

int main() {
    int n = 4;
    string* names = new string[n]; // Braucēju vārdu arrays
    int* points = new int[n]; // Punktu arrays

    // Ievada vārdu un punktus katram braucējam
    for (int i = 0; i < n; i++) {
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
    printAll(names, points, n);
    cout << names[findMaxIndex(points, n)] << " ir lideris" << endl;
    cout << names[findMinIndex(points, n)] << " Ir pedejais" << endl;
    cout << "Videjie punkti: " << average(points, n) << endl;

    delete[] names;
    delete[] points;
    return 0;
}