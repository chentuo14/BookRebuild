#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "rental.h"

using std::string;
using std::vector;

class Customer
{
public:
    Customer(string name);
    ~Customer();

    void addRental(Rental arg);
    vector<Rental>& getRentals();
    string getName();
    string statement();

private:
    string _name;
    vector<Rental> _rentals;
};

#endif // CUSTOMER_H
