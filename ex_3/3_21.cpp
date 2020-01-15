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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << v1.size() << ' ' << v2.size() << ' ' << v3.size() << ' ' <<
                         v4.size() << ' ' << v5.size() << ' ' <<  v6.size() << ' ' << v7.size() << endl;
    for( auto it = v7.cbegin(); it != v7.cend(); it++ )
        cout << *it << ' ' ;
    return 0;
}