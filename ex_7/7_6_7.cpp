#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; using std::cerr; using std::istream; using std::ostream;

struct Sales_data {
    std::string isbn() const { return bookNo; };
    Sales_data & combine ( const Sales_data &);
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
    return os << item.isbn() << ' ' << item.units_sold << ' ' << item.total_revenue << ' ' << item.average_revenue();
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

int main() {
    Sales_data total;
    if ( read( cin, total ) ) {
        Sales_data trans;
        while ( read( cin, trans) ) {
            if ( total.bookNo == trans.bookNo ) {
                total = add( total, trans );
                print( cout, total );
            }
            else {
                cerr << "Data must refer to the same ISBN" << endl;
                return -1;
            }
        }
    }

}