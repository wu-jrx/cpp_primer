#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<int> grades{42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
    vector<int> culster(11);
    auto beg_grades = grades.cbegin();
    auto beg_culster = culster.begin();

    for( ;beg_grades != grades.cend(); beg_grades++ )
        (*(beg_culster+ ( (*(beg_grades))/10 ) ))++ ;
    
    for(; beg_culster != culster.end(); beg_culster++)
        cout << *beg_culster << ' ';
}