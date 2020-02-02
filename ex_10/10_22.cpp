#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using std::unique;
using std::sort;
using std::stable_sort;
using std::find_if;
using std::vector;
using std::cout;
using std::string;
using std::bind;
using namespace std::placeholders;

bool IsShorterThan ( const string &s, size_t sz ) {
    return s.size() >= sz;
}

void elidup ( vector<string> &vec ) {
    sort( vec.begin(), vec.end() );
    auto end_unique = unique ( vec.begin(), vec.end() );
    vec.erase ( end_unique );
}

int main () {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    size_t sz = 4;

    elidup ( test );
    stable_sort ( test.begin(), test.end(), [](const string &s1, const string &s2) { return s1.size() < s2.size(); });
    
    auto largerthan = find_if ( test.begin(), test.end(), bind( IsShorterThan, _1, sz ) );

    for ( ; largerthan != test.cend(); largerthan++ ) {
        cout << *largerthan << ' ' ;
    }
}