#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::sort; using std::find_if; using std::string; using std::vector;

void elimDups( vector<string> &words ) {
    sort( words.begin(), words.end() );
    auto end_unique = unique( words.begin(), words.end() );
    words.erase( end_unique, words.end() );
}

void bigg ( vector<string> &words, size_t sz ) {
    elimDups ( words );
    stable_sort (words.begin(), words.end(), []( const string &s1, const string &s2) { return s1.size() < s2.size(); } );
    auto wc = find_if ( words.begin(), words.end(), [sz]( const string &s ) { return s.size() >= sz; });
    for ( ; wc != words.end(); wc++ )
        cout << *wc << ' ' ;

}
int main() {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    size_t sz = 5;
    bigg( test, sz );
}