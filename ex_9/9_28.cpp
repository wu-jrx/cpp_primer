#include <forward_list>
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::forward_list; using std::string;

void find_and_insert ( forward_list<string> &flst, const string &fin, const string &ins) {
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    bool flag_of_found = false;
    while ( curr != flst.end() ) {
        if ( *curr == fin ) {
            prev = curr;
            flst.insert_after( curr, ins );
            curr ++;
            flag_of_found = true;
        }
        else {
            prev = curr;
            curr ++;
        }
    }
    if ( !flag_of_found )
        flst.insert_after ( prev, ins );
}

int main() {
    forward_list<string> vec = { "This", "is", "a", "test." };
    find_and_insert( vec, "are", "not" );
    for ( auto c : vec )
        cout << c << ' ' ;
    

}