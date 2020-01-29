#include <iostream>
#include <string>

using std::string; using std::cout; using std::cin; using std::endl;

bool is_uppercase ( const string &s ) {
    for ( const auto &c : s )
        if ( isupper ( c ))
            return true;
    return false;
}

void to_lowercase ( string &s ) {
    for ( auto &c : s){
        if ( isupper ( c ) )
            c = tolower( c );
    }
}

int main () {
    string s1, s2;
    s1 = "THIS IS A TEST";
    cout << is_uppercase ( s1 ) << endl;
    to_lowercase ( s1 );
    cout << s1 <<endl;
}