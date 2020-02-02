#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::vector; using std::string;

int main() {
    vector<string> vec { "this", "is", "a", "test" };
    cout << std::count( vec.cbegin(), vec.cend(), "notfound" );

}