#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::string; using std::cin; using std::cout; using std::vector; using std::fstream; using std::getline; using std::istringstream;

struct PersonInfo {
    string name;
    vector<string> pheone_number;
};

int main() {
    string line, word;
    vector<PersonInfo> people;
    fstream input ( "./test.txt" );

    while ( getline( input, line ) ) {
        PersonInfo info;
        istringstream record ( line );
        record >> info.name;
        while ( record >> word ) {
            info.pheone_number.push_back ( word );
        }
        people.push_back ( info );
    }
    for ( auto c : people ) {
        for ( auto n : c.pheone_number ) {
            cout << n << '\n';
        }
    }
    return 0;
}