#include <iostream>
#include <string>

using std::string; using std::cout;

void prefix_suffix ( string &name, const string &pre, const string &suf ){
    name.insert( name.begin(), pre.begin(), pre.end() );
    name.append( suf );
}
int main() {
    string name { "ethan" };
    prefix_suffix ( name, "Mr. ", " Jr." );
    cout << name;

}