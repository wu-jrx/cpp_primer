#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main() {
    string s1 = "Hello world!";
    for ( auto &c : s1 ) {
        c = toupper( c );
    }
    cout << s1 << endl;
    return 0;
}