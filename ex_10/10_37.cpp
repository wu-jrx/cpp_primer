#include <vector>
#include <list>
#include <iterator>
#include <iostream>

using std::back_inserter;
using std::list;
using std::vector;
using std::cout;
using std::copy;

int main() {
    vector<int> vec { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> targ;

    copy( vec.crbegin()+3, vec.crend()-2, back_inserter(targ) );
    for (auto c : targ )
        cout << c << ' ';
}