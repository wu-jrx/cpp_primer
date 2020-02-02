#include <iterator>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;
using std::string;
using std::cout;
using std::vector;

int main() {
    ifstream input( "test.txt" );
    istream_iterator<string> str_it ( input ), str_end;
    ostream_iterator<string> out_it ( cout, "\n" );
    vector<string> vec;

    while ( str_it != str_end )
        vec.push_back( *str_it++ );

    for ( auto c : vec )
        out_it = c;

}
