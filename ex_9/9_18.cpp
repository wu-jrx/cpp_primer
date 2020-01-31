#include <deque>
#include <string>
#include <iostream>

using std::string; using std::deque; using std::cin; using std::cout;

int main() {
    string s;
    deque<string> deq;

    while( cin >> s )
        deq.push_back( s );
    for ( auto beg = deq.cbegin(); beg != deq.cend(); beg++ )
        cout << *beg << '\n';
    return 0;
}