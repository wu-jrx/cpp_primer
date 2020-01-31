#include <string>
#include <iostream>

using std::string; using std::cin; using std::cout;

string &replace_with( string &s, const string &oldVal, const string &newVal ) {
    for ( auto curr = s.begin(); curr != s.end() - oldVal.size(); ) {
        if ( oldVal == string { curr, curr + oldVal.size() } ) {
            curr = s.erase( curr, curr+oldVal.size() );
            curr = s.insert( curr, newVal.begin(), newVal.end() );
            curr += oldVal.size();
        }
        else
        {
                curr++;
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