#include <iostream>
using namespace std;

int main() {
    int n = 3;
    string* names = new string[n];
    int* points = new int[n];

    names[0] = "Verstappen"; points[0] = 350;
    names[1] = "Norris";     points[1] = 320;
    names[2] = "Leclerc";    points[2] = 290;

    delete[] names;
    delete[] points;
    return 0;
}