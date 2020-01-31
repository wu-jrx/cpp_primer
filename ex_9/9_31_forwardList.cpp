#include <forward_list>
#include <iostream>

using std::forward_list; using std::cin; using std::cout; using std::advance;

int main() {
    forward_list<int> flst { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while ( curr != flst.end() ) {
        if ( *curr % 2 ) {
            prev = flst.insert_after( curr, *curr );
            advance ( curr, 2 );
        }
        else {
            auto temp = curr;
            curr = flst.erase_after( prev );
            prev = temp;
        }
    }
    for ( auto c : flst )
        cout << c << ' ';
        
}