#include <iostream>
#include <exception>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double i, j;
    while ( cin >> i >> j ) {
        try {
            if ( j == 0 )   throw std::runtime_error( "Diveded by zero.");
            cout << i/j << endl;
        } catch ( std::runtime_error err ) {
            cout << err.what() << "\nTry agagin? Enter y or n" << endl;
            char rsp;
            cin >> rsp;
            if ( rsp == 'y' || rsp == 'Y')  continue;
            else    break;
        }
    }
}