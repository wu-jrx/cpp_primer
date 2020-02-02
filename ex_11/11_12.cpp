#include <utility>
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::pair;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector< pair<string, int> > s_and_i;
    string s;
    int i;
    while ( cin >> s >> i ) {
        s_and_i.push_back( {s, i} );
    }
    for( auto c : s_and_i )
        cout << c.first << " : " << c.second << endl;

}