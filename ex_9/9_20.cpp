#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <deque>

using std::string; using std::list; using std::cin; using std::cout; using std::vector; using std::deque;

int main() {
    list<int> num { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> odd, even;

    for ( auto &c: num ) {
        if ( c%2 == 1 )
            odd.push_back( c );
        else
            even.push_back( c );
    }
    for ( auto &c: even )
        cout << c << '\n' ;
    
}