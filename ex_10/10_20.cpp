#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using std::string; using std::count_if; using std::vector; using std::cout;

int NumOfLargeThan ( const vector<string> &words, const size_t sz ) {
    return count_if( words.cbegin(), words.cend(), [sz]( const string &s1 ) { return (s1.size() > sz);} );
}

int main() {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    size_t sz = 3;
    cout << NumOfLargeThan( test, sz );
}