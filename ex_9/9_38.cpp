#include <vector>
#include <iostream>

using std::vector; using std::cout;

int main() {
    vector<int> vec{ 0, 1, 2, 4, 5 };
    vec.reserve( 10 );
    cout << "size:" << vec.size()
         << " capacity: " << vec.capacity();
}