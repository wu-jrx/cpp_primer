#include <string>
#include <iterator>
#include <map>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>

using std::istringstream;
using std::ifstream;
using std::string;
using std::map;
using std::istream_iterator;
using std::getline;
using std::find_if;
using std::cout;
using std::endl;

map<string, string> read( ifstream &input ) {
    map<string, string> rules;
    string line;
    while ( getline ( input, line ) ) {
        auto sep = find_if( line.begin(), line.end(), iswspace );
        rules.insert( { string(line.begin(), sep), string( sep+1, line.end() ) } );
    }
    return rules;
}


void transform_and_print ( map<string, string> rules, ifstream &input ) {
    string line;
    while ( getline( input, line ) ){
        istringstream stream( line );
        string word;
        bool firstword = true;
        while ( stream >> word ) {
            if ( firstword )
                firstword = false;
            else
                cout << ' ';
            //transform and print;

            auto map_it = rules.find( word );
            if ( map_it != rules.end() )
                cout << map_it -> second;
            else
                cout << word;
        }
        cout << endl;
    }
}



int main() {
    map<string, string> rules;
    ifstream input( "rule.txt" );
    ifstream input_file( "test.txt" );
    rules = read( input );

    transform_and_print( rules, input_file );
}