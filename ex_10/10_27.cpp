#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>

using std::sort;
using std::vector;
using std::unique_copy;
using std::cout;
using std::string;
using std::back_inserter;

int main() {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    vector<string> uniq;
    
    sort( test.begin(), test.end() );
    unique_copy(test.begin(), test.end(), back_inserter(uniq) );
    for (auto c : uniq) 
        cout << c << ' ' ;
    
}