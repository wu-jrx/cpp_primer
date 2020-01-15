#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;
using std::vector;

int main() {
    int i;
    vector<int> v;
    while( cin >> i)
        v.push_back( i );

    for( auto it = v.begin(); it != v.end(); it++ )
        (*it) *= (*it);

    for( auto it = v.begin(); it != v.end(); it++ )
        cout << *it << ' ';

    return 0;
}