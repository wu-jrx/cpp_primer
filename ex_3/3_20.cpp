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
    cout << v.size() <<endl;
    for( decltype( v.size() ) t = 0, j = 1; j < v.size(); t++, j++)
        cout << v[t] + v[j] << ' ' ;
    cout << endl;
    for( decltype( v.size() ) i = 0, j = v.size() - 1; i != j; i++, j--)
        cout << v[i] + v[j] << ' ';
    return 0;
}