#include <iostream>
#include "functions.h"
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

// Funkcija kas pārbauda, vai vārdā ir tikai burti
bool isValidName(string name) {
    for (int i = 0; i < name.length(); i++) {
        char c = name[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            return false;
    }
    return true;
}