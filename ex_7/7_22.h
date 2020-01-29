#include <string>
#include <iostream>

struct Person {
    friend std::istream &read( std::istream &, Person & );
    friend std::ostream &print ( std::ostream &, const Person & );

    public:
        Person() = default;
        Person( const std::string na, const std::string add ): name(na), address(add){};
        Person( std::istream &);

        std::string get_name () const { return name; };
        std::string get_address () const {return address; };
    private:    
        std::string name;
        std::string address;

};

std::istream &read ( std::istream &is, Person &person ) {
    return is >> person.name >> person.address;
}
std::ostream &print ( std::ostream &os, const Person &person) {
    return os << person.name << person.address;
}
Person::Person( std::istream &is ) {
    read( is, *this );
}