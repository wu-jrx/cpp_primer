#include <fstream>
#include <vector>
#include <string>
#include <iostream>


int main() {
    std::fstream input( "./test.txt" );
    std::vector<std::string> v;
    if ( input ) {
        std::string s;
        while ( std::getline( input, s ) )
            v.push_back( s );
    }        
    for ( const auto &c : v )
        std::cout << c << '\n';
    return 0;

}