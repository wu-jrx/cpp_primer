#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main(){
    string s1, s2;
    getline ( cin, s1 );
    getline ( cin, s2 );
    if ( s1 == s2 )
        cout << s1 << " is equal to " << s2 << endl;
    else if ( s1 > s2 )
        cout << s1 << " is larger than " << s2 << endl;
    else
        cout << s1 << " is smaller then " << s2 << endl;
    return 0;
}