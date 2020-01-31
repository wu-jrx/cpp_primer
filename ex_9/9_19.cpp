#include <list>
#include <string>
#include <iostream>

using std::string; using std::list; using std::cin; using std::cout;

int main() {
    string s;
    list<string> deq;

    while( cin >> s )
        deq.push_back( s );
    for ( auto beg = deq.cbegin(); beg != deq.cend(); beg++ )
        cout << *beg << '\n';
    return 0;
}