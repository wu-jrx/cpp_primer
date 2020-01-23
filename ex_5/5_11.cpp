#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    char ch;
    int vcont = 0;
    while( (ch = getchar()) != -1 ) {                   //getchar() return -1 if encounter EOF.
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
        else if ( ch == '\t' || ch == ' ' || ch == '\n' )
            vcont++;
    }
    cout << vcont;
    return 0;
}