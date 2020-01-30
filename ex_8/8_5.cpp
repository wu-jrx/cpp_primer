#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>



int main() {
    std::fstream input( "./test.txt" );
    std::vector<std::string> v;
    if ( input ) {
        std::string word;
        std::string line;
        while ( std::getline( input, line ) ) {
            std::istringstream record ( line );
            while ( record >> word )
                v.push_back( word );
    }
    }
    for ( const auto &c : v )
        std::cout << c << '\n';
    return 0;

}