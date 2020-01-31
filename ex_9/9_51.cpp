#include <string>
#include <vector>
#include <iostream>

using std::cout; using std::string; using std::vector;

struct Date {
    size_t year = 0;
    size_t month = 0;
    size_t day = 0;

    Date() = default;
    Date( const string &s ) {
        vector<size_t> IndexOfSep;                          // To store the index of " ", "," or "/"
        string sep = " /,";
        string str_month, str_day, str_year;

        for ( string::size_type pos = 0; (pos = s.find_first_of( sep, pos )) != string::npos; pos++ ) 
            IndexOfSep.push_back ( pos );
        
        str_month = s.substr( 0, IndexOfSep[0] );

        day = std::stoi( s.substr( IndexOfSep[0]+1, IndexOfSep[1]-IndexOfSep[0]-1 ) );
        year = std::stoi( s.substr( IndexOfSep[1]+1 ) );
        
        if( str_month.compare("Jan") == 0 || str_month.compare("January") == 0 || str_month.compare("1") == 0 )     month = 1;
        if( str_month.compare("Feb") == 0 || str_month.compare("February") == 0 || str_month.compare("2") == 0 )    month = 2;
        if( str_month.compare("Mar") == 0 || str_month.compare("March") == 0 || str_month.compare("3") == 0 )       month = 3;
        if( str_month.compare("Apr") == 0 || str_month.compare("April") == 0 || str_month.compare("4") == 0 )       month = 4;
        if( str_month.compare("May") == 0 || str_month.compare("5") == 0 )                                          month = 5;
        if( str_month.compare("Jun") == 0 || str_month.compare("June") == 0 || str_month.compare("6") == 0 )        month = 6;
        if( str_month.compare("Jul") == 0 || str_month.compare("July") == 0 || str_month.compare("7") == 0 )        month = 7;
        if( str_month.compare("Aug") == 0 || str_month.compare("August") == 0 || str_month.compare("8") == 0 )      month = 8;
        if( str_month.compare("Sept") == 0 || str_month.compare("September") == 0 || str_month.compare("9") == 0 )  month = 9;
        if( str_month.compare("Oct") == 0 || str_month.compare("October") == 0 || str_month.compare("10") == 0 )    month = 10;
        if( str_month.compare("Nov") == 0 || str_month.compare("November") == 0 || str_month.compare("11") == 0 )   month = 11;
        if( str_month.compare("Dec") == 0 || str_month.compare("December") == 0 || str_month.compare("12") == 0 )   month = 12;

    }
    void print() {
        cout << "Month: " << month
             << "  Day: " << day
             << "  Year: " << year;
    }

};

int main() {
    Date date ( "Feb/1/2019" );
    date.print();
}