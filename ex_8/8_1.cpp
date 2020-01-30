#include <iostream>

using std::istream; using std::ostream; using std:: cout; using std::cin; using std::endl;

istream &read ( istream &is ) {
    std::string s;
    while ( is.good() ) {
        is >> s;
        cout << s << endl;
    }
    s.clear();
    return is;
}

int main() {
    read( cin );
    return 0;
}