#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> vec{ "This", "is", "a", "new", "life" };
    auto iter = vec.begin();

    cout << iter++ -> empty() <<endl;

    return 0;
}
