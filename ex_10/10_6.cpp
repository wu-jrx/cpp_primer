#include <numeric>
#include <vector>
#include <iostream>

using std::fill_n; using std::vector; using std::cout; using std::accumulate;

int main() {
    vector<int> vec { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    fill_n( vec.begin(), vec.size(), 0 );
    for( auto c : vec )
        cout << c << ' ' ;
        
}