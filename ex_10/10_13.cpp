#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using std::partition; using std::cout; using std::string; using std::vector;

bool predicate ( const string &s ) {
    return s.size() <= 5;
}

int main() {
    vector<string> test = { "fox", "over", "red", "slowdown", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    auto sec_par = partition ( test.begin(), test.end(), predicate );
    for ( ; sec_par != test.end(); sec_par++ )
        cout << *sec_par << ' ' ;
    return 0;
}