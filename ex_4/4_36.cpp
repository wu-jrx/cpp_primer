#include <iostream>

using std::cout;
using std::endl;

int main() {
    int i = 2, j = 2;
    double d = 2.55;
    j *= d;
    i *= static_cast<int>( d );
    cout << i << '\n' << j << endl;
    return 0;
}