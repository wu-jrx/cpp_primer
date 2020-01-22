#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector< int > vec{1, 2, 3, 4, 5, 6, 7, 8};

    for ( auto &c : vec ) {
        ( c % 2 ) ?  ( c *= c ) : ( c = c );
        cout << c << ' ' ;
    }
}