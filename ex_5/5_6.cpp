#include <iostream>
using std::cout;

int main() {
    int grade = 78;
    char lettergrade;

    ( grade % 10 > 3 ) ? ( (grade % 10 > 7 ) ? lettergrade = '+': lettergrade = ' ') : lettergrade = '-';
    cout << lettergrade;
    return 0;
}