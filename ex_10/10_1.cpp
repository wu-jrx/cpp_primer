#include <algorithm>
#include <iostream>
#include <vector>

using std::cout; using std::vector;

int main() {
    vector<int> vec { 0, 1, 1, 2, 3, 5, 8 };
    cout << std::count( vec.cbegin(), vec.cend(), 3 );

}