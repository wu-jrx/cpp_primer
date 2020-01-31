#include <vector>
#include <string>
#include <iostream>

using std::string; using std::vector; using std::cout;

int main() {
    vector<string> s { "123", "456", "789" };
    int sum = 0;
    for ( auto c: s ) {
        int temp = std::stoi( c );
        sum += temp;
    }
    cout << sum;
}