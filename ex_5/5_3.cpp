#include <iostream>
using std::cout;

int main() {
    int val=0, sum = 0;

    while ( val <= 10 ) {
        sum += val++ ; 
    }
    cout << sum;
}