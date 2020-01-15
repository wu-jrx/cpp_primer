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
    while ( cin >> i )
        v.push_back( i );
    for ( auto it = v.cbegin(); it+1 != v.cend(); it++)
        cout << (*it) + (*(it+1)) << ' ';
    cout << endl;
    
    auto beg = v.cbegin();
    auto end = v.cend() - 1;
    for ( int i = 0; i < v.size()/2; i++)
        cout << *(beg+i) + *(end-i) << ' ';
    return 0;

}