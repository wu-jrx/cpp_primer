#include <iostream>

using std::cin; using std::cout;  using std::endl;

int fact ( int val ) {
    if ( val > 0 && val != 1 )
        return val * fact ( val - 1 );
    else
        return 1;
}
int main() {
    int val;
    cin >> val;
    cout << fact ( val ) << endl;
    return 0;
    
}