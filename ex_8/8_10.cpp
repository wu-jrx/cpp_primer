#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using std::vector; using std:: cout; using std::cin; using std::endl; using std::string; using std::istringstream; using std::getline;

int main() {
    vector<string> vec;
    string line;
    string word;
    istringstream record;

    while ( getline ( cin, line ) )
        vec.push_back( line );
    for ( auto c : vec ) {
        record.str( c );
        while ( record >> word )
            cout << word << '\n';
    }
}