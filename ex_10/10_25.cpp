#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <functional>


using std::cout;
using std::sort;
using std::partition;
using std::string;
using std::vector;
using std::bind;
using namespace std::placeholders;

void elimDups( vector<string> &words ) {
    sort( words.begin(), words.end() );
    auto end_unique = unique( words.begin(), words.end() );
    words.erase( end_unique, words.end() );
}

bool check_size ( const string &s, size_t sz ){
    return s.size() < sz;
}

void bigg ( vector<string> &words, size_t sz ) {
    elimDups ( words );
    stable_sort (words.begin(), words.end(), []( const string &s1, const string &s2) { return s1.size() < s2.size(); } );
    
    auto wc = partition( words.begin(), words.end(), bind( check_size, _1, sz ) );

    for ( ; wc != words.end(); wc++ )
        cout << *wc << ' ' ;

}
int main() {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    size_t sz = 4;
    bigg( test, sz );
}