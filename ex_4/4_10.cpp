#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int i;
    while ( cin >> i && i != 42) 
        cout << i << endl;
    return 0;
}