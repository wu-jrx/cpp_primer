#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string read, tmp;

    while ( cin >> read ) {
        if ( read[ 0 ] != '_')   continue;
        if ( read == tmp ) break;
        else tmp = read;
    }
    if ( cin.eof() ) cout << "no word was reapeated." <<endl;
    else             cout << read << " occurs twice" <<endl;
    return 0;

}