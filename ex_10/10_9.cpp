#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using std::vector; using std::string; using std::unique; using std::sort; using std::cout;

void elimDups( vector<string> &words ) {
    sort( words.begin(), words.end() );
    auto end_unique = unique( words.begin(), words.end() );
    words.erase( end_unique, words.end() );
}
int main() {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    elimDups( test );
    for (auto c: test ) {
        cout << c << ' ' ;
    }
}