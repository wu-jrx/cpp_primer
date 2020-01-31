#include <vector>
#include <list>
#include <string>
#include <iostream>

using std::list; using std::cin; using std::cout; using std::vector; using std::string;

int main() {
    list<char *> clist{ "this", "is", "a", "test" };
    vector< string > vec;
    vec.assign( clist.begin(), clist.end() );
    for( auto &c : vec)
        cout << c << ' ';
    
}