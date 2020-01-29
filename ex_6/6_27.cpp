#include <iostream>
#include <initializer_list>

int print_sum ( std::initializer_list<int> el ) {
    int sum = 0;
    for ( auto i : el )
        sum += i;
    return sum;
}

int main() {
    std::cout << print_sum ( {1, 2, 3, 4, 5, 6}  ) <<std::endl;
    return 0;
}