#include <iostream>
using namespace std;

void printAll(string* names, int* points, int n) {
    for (int i = 0; i < n; i++)
        cout << names[i] << " - " << points[i] << " pts" << endl;
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
        cout << "Ievadi pilota vardu: ";
        cin >> names[i];
        cout << "Ievadi punktus: ";
        cin >> points[i];
    }

    printAll(names, points, n);
    cout << names[findMaxIndex(points, n)] << " ir lideris" << endl;

    delete[] names;
    delete[] points;
    return 0;
}