#include <string>
#include <iostream>

using std::string; using std::cout;

int main() {
    string sample( "ab2c3d7R4E6" );
    string num( "1234567890" );
    string alphabet ( "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    for ( size_t pos = 0; (pos = sample.find_first_of( num, pos )) != string::npos; pos++) 
        cout << sample[ pos ] << ' ';
    cout << '\n';
    for ( size_t pos = 0; (pos = sample.find_first_of( alphabet, pos )) != string::npos; pos++)
        cout << sample [ pos ] << ' ';
}