#include <string>
#include <map>
#include <iostream>
#include <algorithm>

using std::string;
using std::cout;
using std::map;
using std::cin;
using std::endl;
using std::find_if;

int main() {
    map< string, size_t > word_count;
    string word;
    while( cin >> word ) {
        for ( auto &c : word )
            c = tolower ( c );
        word.erase( find_if( word.begin(), word.end(), ispunct ), word.end() );

        ++word_count[word];
    }
    
    for ( auto pair : word_count )
        cout << pair.first << " occurs " << pair.second << ( pair.second > 1 ? " times." : " time.") << endl;

}