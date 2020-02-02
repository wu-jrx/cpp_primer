#include <map>
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int main() {
    map<string, vector<string> > family;
    string last_name, children_name;

    while ( cin >> last_name ) {
        while ( cin >> children_name )
            family[ last_name ].push_back( children_name );
    }
    for ( auto pair : family ) {
        cout << pair.first << " has children named ";
        for ( auto chil_name : pair.second )
            cout << chil_name << ' ';
        cout << endl;
    }
}