#include <iostream>
using std::cout;
int main() {
    int grade = 71;
    char lettergrade;
    if ( grade % 10 > 3 ) {
        if ( grade % 10 > 7 )
            lettergrade = '+';
    }
    else
        lettergrade = '-';
    cout << lettergrade;
    return 0;
}