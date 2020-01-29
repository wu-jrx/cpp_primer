#include <iostream>

using std::cin; using std::cout; using std::endl;

int cnt () {
    static int ctr = 0;
    return ++ctr;
}

int main() {
    for ( size_t i = 0; i < 10; i++)
        cout << cnt() << endl;
    return 0;
}