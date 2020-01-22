#include <iostream>

using std::cout;
using std::endl;

int main() {
    bool a;
    char b;
    wchar_t c;
    char16_t d;
    char32_t e;
    short f;
    int g;
    long h;
    long long i;
    float j;
    double k;
    long double l;
    cout << sizeof(a) << ' ' << sizeof(b) << ' ' << sizeof(c) << ' ' << sizeof(d) << ' ' << sizeof(e) << ' ' << sizeof(f) << ' ' << sizeof(g) << ' ' << sizeof(h) << ' '
            << sizeof(i) << ' ' << sizeof(j) << ' ' <<sizeof(k) << ' ' << sizeof(l) << endl;
    return 0; 
}