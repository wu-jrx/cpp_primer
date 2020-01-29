#include <iostream>

using std::cout; using std::endl;

int max( int i, const int *j ) {
    if ( i < *j )
        return *j;
    else
        return i;
    
}

int main() {
    int i = 3, j = 2;
    cout << max( i, &j) <<endl;
}