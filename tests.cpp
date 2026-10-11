#include <cassert>
#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    int p[3] = {10, 30, 20};

    assert(findMaxIndex(p, 3) == 1);
    assert(findMinIndex(p, 3) == 0);
    assert(average(p, 3) == 20.0);

    assert(isValidName("Max"));
    assert(!isValidName("Max1"));

    string names[2] = {"Max", "Lando"};
    assert(isNameTaken(names, 2, "Max"));
    assert(!isNameTaken(names, 2, "Oscar"));

    cout << "Visi testi OK" << endl;
    return 0;
}
