#include <iterator>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using std::sort;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;
using std::string;
using std::cout;
using std::vector;

int main() {
    ifstream input( "test.txt" );
    istream_iterator<int> i_it ( input ), i_eof;
    ostream_iterator<int> output( cout, " " );
    vector<int> vec( i_it, i_eof );
    sort( vec.begin(), vec.end() );
    copy( vec.begin(), vec.end(), output );

}