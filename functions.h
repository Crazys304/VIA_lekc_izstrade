#ifndef FUNCTIONS_H
#define IZSTRADE_FUNCTIONS_H

#include <string>
using namespace std;

void printAll(string* names, int* points, int n);
int findMaxIndex(int* points, int n);
int findMinIndex(int* points, int n);
double average(int* points, int n);
bool isNameTaken(string* names, int count, string newName);
bool isValidName(string name);

#endif
