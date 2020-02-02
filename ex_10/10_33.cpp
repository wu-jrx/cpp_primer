#include <iterator>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using std::sort;
using std::unique_copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::vector;

int main() {
    ifstream input ( "input.txt" );
    ofstream output_odd ( "output_odd.txt" );
    ofstream output_even ( "output_even.txt" );
    
    istream_iterator<int> input_iter( input ), input_eof;
    ostream_iterator<int> output_odd_iter ( output_odd, " " );
    ostream_iterator<int> output_even_iter ( output_even, " " );

    while( input_iter != input_eof ) {
        if ( *input_iter % 2 )
            output_odd_iter = *input_iter;
        else
            output_even_iter = *input_iter;
        input_iter++;
    }
}