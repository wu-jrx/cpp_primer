#include <string>
#include <iostream>

using std::string; using std::cin; using std::cout;

string &replace_with( string &s, const string &oldVal, const string &newVal ) {
    for ( string::size_type i = 0; i != s.size() - oldVal.size(); ) {
        if ( oldVal == s.substr( i, oldVal.size() ) ) {
            s.replace( i, oldVal.size(), newVal );
            i += oldVal.size();
        }
        else
        {
                i++;
        }
        

    }
}
int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s ;

    return 0;
}