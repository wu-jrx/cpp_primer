#include <numeric>
#include <vector>
#include <iostream>
#include <iterator>
#include <list>

using std::list; using std::vector; using std::cout; using std::accumulate; using std::back_inserter;

int main() {
    vector<int> vec; 
    list<int> lst { 1, 2, 3, 4, 5 };
    std::copy( lst.cbegin(), lst.cend(), back_inserter(vec));
    for ( auto c : vec )
        cout << c << ' ' ;
}