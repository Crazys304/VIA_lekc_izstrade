#include <iostream>
using namespace std;

void printAll(string* names, int* points, int n) {
    for (int i = 0; i < n; i++)
        cout << names[i] << " - " << points[i] << " pts" << "\n";
}

int findMaxIndex(int* points, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (points[i] > points[maxIndex]) maxIndex = i;
    return maxIndex;
}

int main() {
    int n = 3;
    string* names = new string[n];
    int* points = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Ievadi pilota vardu: " << "\n";
        cin >> names[i];
        cout << "Ievadi punktus: " << "\n";
        cin >> points[i];
        while (!cin.good()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Nederiga ievade, megini velreiz: " << "\n";
            cin >> points[i];
        }
    }

    printAll(names, points, n);
    cout << names[findMaxIndex(points, n)] << " ir lideris" << endl;

    delete[] names;
    delete[] points;
    return 0;
}