#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    for ( int (&row) [ 4 ] : ia ){
        for ( int &col : row )
            cout << col << " ";
        cout << '\n';
    }

    for ( int i = 0; i != 3; i++) {
        for ( int j = 0; j != 4; j++)
            cout << ia[ i ][ j ] << " ";
        cout << '\n';
    }
    
    for ( int ( *it ) [4] = ia; it != ia + 3; it++) {
        for ( int *jt  = *it; jt != (*it) + 4; jt++ )
            cout << *jt << ' ';
        cout << '\n';
    }
}