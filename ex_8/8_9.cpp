#include <iostream>
#include <sstream>

using std::istream; using std::ostream; using std:: cout; using std::cin; using std::endl; using std::string; using std::istringstream; using std::getline;


int main() {
    string line;
    string word;
    while ( getline ( cin, line ) ) {
        istringstream record ( line );
        while ( record >> word )
            cout << word << '\n';
    }    
    return 0;
}