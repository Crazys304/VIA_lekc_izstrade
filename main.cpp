#include <iostream>
using namespace std;

void printAll(string* names, int* points, int n) {
    for (int i = 0; i < n; i++)
        cout << names[i] << " - " << points[i] << " pts" << endl;
}

int main() {
    int n = 3;
    string* names = new string[n];
    int* points = new int[n];

    names[0] = "Verstappen"; points[0] = 350;
    names[1] = "Norris";     points[1] = 320;
    names[2] = "Leclerc";    points[2] = 290;

    printAll(names, points, n);

    delete[] names;
    delete[] points;
    return 0;
}