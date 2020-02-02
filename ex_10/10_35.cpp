#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;

int main() {
    vector<string> test = { "fox", "over", "red", "slow", "the", "jumps", "quick", "red", "slow", "the", "turtle" };
    for (auto rbeg = test.end(); rbeg !=test.begin();  )
        cout << *--rbeg << ' ';

    return 0;
}