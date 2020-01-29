#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap ( int &i, int &j ) {
    int temp = j;
    j = i;
    i = temp;
}

int main() {
    int i, j;
    cin >> i >> j;
    swap( i, j );
    cout << i << ' ' << j << endl;
    return 0;
}