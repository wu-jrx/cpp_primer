#include <iostream>

using std::cout;
using std::endl;

int main() {
    cout << -30 * 3 + 21 / 5 << ' '
         << -30 + 3 * 21 / 5 << ' ' 
         << 30 / 3 * 21 % 5 << ' ' 
         << -30 /3 * 21 % 4 << endl;
         
    return 0;

}