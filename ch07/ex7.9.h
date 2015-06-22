#ifndef EX_7_5_H
#define EX_7_5_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Person
{
    string name;
    string address;

    string getName() const {return name;}
    string getAddress() const {return address;}
};

istream &read(istream &is, Person &item)
{
    is >> item.name >> item.address;
    return is;
}

ostream &print(ostream &os, const Person &item)
{
    os << item.name << " " << item.address << endl;
    return os;
}

#endif
