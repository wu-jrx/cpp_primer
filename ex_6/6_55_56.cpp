#include <vector>
#include <iostream>

using std::cout; using std::endl;

int add( int i, int j ) {
    return i+j;
}
int sub( int i, int j ) {
    return i-j;
}
int mul ( int i, int j ) {
    return i*j;
}
int divd( int i, int j ) {
    return i / j;
}
int main() {
    using PFunc = int (*) (int a, int b);
    std::vector<PFunc> a{ add, sub, mul, divd };
    for (  const auto c : a)
        cout << c( 1, 2 ) << endl;
}
    