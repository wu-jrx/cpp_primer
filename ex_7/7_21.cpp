#include <string>
#include <iostream>

using std::string; using std::cin; using std::cout; using std::endl; using std::istream; using std::ostream;


struct Sales_data {
    friend istream &read( istream &, Sales_data& );
    friend ostream &print( ostream &, const Sales_data &);
    friend Sales_data add( const Sales_data &, const Sales_data &);
    public:
        string isbn() const { return bookNo; };
        Sales_data & combine ( const Sales_data &);
        Sales_data() = default;
        Sales_data(const string &s): bookNo( s ) {};
        Sales_data( const string &s, unsigned u, double p ): bookNo(s), units_sold(u), total_revenue( p*u ){};
        Sales_data( istream & );
    private:
        double average_revenue ( ) const;
        string bookNo;
        unsigned units_sold = 0;
        double total_revenue = 0.0;
};
Sales_data& Sales_data::combine ( const Sales_data& rhs ) {
    units_sold += rhs.units_sold;
    total_revenue += rhs.total_revenue;
    return *this;
}
double Sales_data::average_revenue() const {
    if ( units_sold != 0 )
        return total_revenue / units_sold;
    else
        return 0;
}

ostream & print ( ostream& os, const Sales_data &item) {
    return os << item.isbn() << ' ' << item.units_sold << ' ' << item.total_revenue << ' ' << item.average_revenue() << '\n';
}

istream &read ( istream &is, Sales_data &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.total_revenue = price * item.units_sold;
    return is; 
}

Sales_data add ( const Sales_data &lhs, const Sales_data &rhs ) {
    Sales_data sum = lhs;
    sum.combine( rhs );
    return sum;
}

Sales_data::Sales_data( istream &is ) {
    read ( is, *this );
}

int main() {
    Sales_data test1 = Sales_data( );
    Sales_data test2 = Sales_data( cin );
    Sales_data test3 = Sales_data( "abcd" );
    Sales_data test4 = Sales_data( "abcd", 1, 12.5 );
    print( cout, test1 );
    print( cout, test2 );
    print( cout, test3 );
    print( cout, test4 );
    return 0;
}