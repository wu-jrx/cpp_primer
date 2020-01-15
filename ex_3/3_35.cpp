#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;
using std::vector;

int main() {
    int a[10] = {1, 3, 4, 5, 7, 1};
    int *end = a + sizeof( a ) / sizeof( int );
    for ( int *it = a; it != end; it++)
        *it = 0;
    
    cout << "A2 is "<< a[ 2 ];
}