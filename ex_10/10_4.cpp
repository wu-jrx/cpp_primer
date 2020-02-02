#include <numeric>
#include <vector>
#include <iostream>

using std::vector; using std::cout; using std::accumulate;

int main() {
    vector<double> vec { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
    cout << accumulate( vec.cbegin(), vec.cend(), 0.0 );
    
}