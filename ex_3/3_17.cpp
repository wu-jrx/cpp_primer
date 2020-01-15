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
    string s;
    vector<string> v;

    while( cin >> s )
        v.push_back( s );
    for ( auto &s1 : v )
        for ( auto c : s1 )
            c = toupper( c );
    for ( decltype( v.size() ) i = 0; i < v.size() ; i++ ) {
        if ( i != 0 && i % 8 == 0 )
            cout << '\n';
        cout << v[ i ] <<'\t' ;
    }
    return 0;
    
}