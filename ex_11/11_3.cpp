#include <string>
#include <map>
#include <iostream>

using std::string;
using std::cout;
using std::map;
using std::cin;
using std::endl;

int main() {
    map< string, size_t > word_count;
    string word;
    while( cin >> word )
        ++word_count[word];
    
    for ( auto pair : word_count )
        cout << pair.first << " occurs " << pair.second << ( pair.second > 1 ? " times." : " time.") << endl;

}