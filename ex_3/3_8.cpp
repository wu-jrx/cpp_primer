#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

 int main() {
    string s1 = "Hello world!";
    string s2 = "Nice job";
    decltype( s1.size() ) N = 0;
    while( N < s1.size() ) {
        s1[N] = toupper( s1[N] );
        N++;
    }
    for (decltype( s2.size() ) N = 0; N < s2.size(); N++ )
        s2[N] = toupper ( s2[N] );
    cout << s1 << '\n' << s2 << endl;
    return 0; 
}