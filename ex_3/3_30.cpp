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
    int a[10] = {};
    for ( int i = 0; i < sizeof( a ); i++)
        a[ i ] = i;
    for ( auto c : a )
        cout << c << ' ' ;
    return 0;
}