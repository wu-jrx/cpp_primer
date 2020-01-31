#include <iostream>
#include <list>
#include <vector>

using std::list; using std::vector; using std::cin; using std::cout;

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> odd;
    list<int> even;
    for ( size_t i = 0; i != sizeof(ia)/sizeof(int); i++ ) {
        if ( ia[i]%2 )
            odd.push_back( ia[i] );
        else
            even.push_back( ia[i] );
    }
    for ( auto c: even )
        cout << c << ' ';

}