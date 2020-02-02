#include <list>
#include <algorithm>
#include <iostream>

using std::cout;
using std::find;
using std::list;

int main() {
    list<int> ilist {1, 2, 3, 0, 1, 3, 0, 6};
    auto end_fig = find( ilist.crbegin(), ilist.crend(), 0 );
    while ( end_fig != ilist.crend() )
        cout << *end_fig++ << ' ';
    
}