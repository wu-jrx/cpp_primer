#include <iostream>
#include <exception>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double i, j;
    cin >> i >> j;
    if ( j == 0 )
        throw std::runtime_error ( "Divided by zero" );
    cout << i/j << endl;
    return 0;
    
}