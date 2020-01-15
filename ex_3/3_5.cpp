#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main(){
    string s, s1;
    while ( cin >> s1 )
        s += s1;
    cout << s << endl;
    return 0;
}