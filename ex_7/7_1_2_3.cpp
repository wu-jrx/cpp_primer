#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; using std::cerr;

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

int main() {
    Sales_data total;
    if ( cin >> total.bookNo >> total.units_sold >> total.total_revenue ) {
        Sales_data trans;
        while ( cin >> trans.bookNo >> trans.units_sold >> trans.total_revenue ) {
            if ( total.bookNo == trans.bookNo ) {
                total.combine( trans );
                cout << total.bookNo << ' ' << total.units_sold << ' ' << total.total_revenue << endl;
            }
            else {
                cerr << "Data must refer to the same ISBN" << endl;
                return -1;
            }
        }
    }

}