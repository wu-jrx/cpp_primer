#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    char rsp;
    do {
        cout << "Please input two strings." << endl;
        string s1, s2;
        cin >> s1 >> s2;
        cout << ( (s1 <= s2) ? s1 : s2 ) << " is less than the other\n" << "Do you want one more?" << endl;
        cin >> rsp;
    } while ( rsp == 'y' );
    return 0;
}