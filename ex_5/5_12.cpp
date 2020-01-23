#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    char ch;
    int vcont = 0;
    while( cin >> ch ) {
        if ( ch == 'a' || ch == 'A' )
            vcont++;
        else if( ch == 'e' || ch == 'E' )
            vcont++;
        else if ( ch == 'i' || ch == 'I' )
            vcont++;
        else if ( ch == 'o' || ch == 'O' )
            vcont++;
        else if ( ch == 'u' || ch == 'U' )
            vcont++;
    }
    cout << vcont;
    return 0;
}