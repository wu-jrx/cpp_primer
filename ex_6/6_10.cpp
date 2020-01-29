#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap_two_val( int *val1, int *val2 ) {
    int temp = *val2;
    *val2 = *val1;
    *val1 = temp;
}

int main() {
    int i, j;
    cin >> i >> j;
    swap_two_val( &i, &j );
    cout << i << ' ' << j << endl;
    return 0;
}