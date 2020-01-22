#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x [10];
    int *p = x;
    cout << sizeof(p) <<endl;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
}