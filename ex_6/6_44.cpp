#include <iostream>
#include <string>

using std::string; using std::cout;

inline bool isShorter ( const string &s1, const string &s2 ) {
    return s1.size() < s2.size();
}

int main() {
    string s1, s2;
    s1 = "This is test";
    s2 = "This is";
    cout << isShorter ( s2, s1 );
    return 0;
}