#include <vector>
#include <iostream>

using std::vector; using std::cin; using std::cout; using std::endl;

bool is_contained ( vector<int>::const_iterator beg, vector<int>::const_iterator end, int val ) {
    while ( beg != end ) {
        if ( val == *beg )
            return true;
        ++beg;
    }
    return false;
}

int main() {
    vector<int> vec { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << is_contained( vec.begin(), vec.end(), 11 );
}