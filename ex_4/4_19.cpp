#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> vec{ 0,1,2,3,4,5 };

    for ( auto ival : vec ) {
        int *ptr = &ival;
        if ( ptr != 0 && *ptr++ )
            cout << "NonZero" << endl;
        else
            cout << "Zero" << endl;
    }
    return 0;
}