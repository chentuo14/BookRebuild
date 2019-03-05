#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>
#include <vector>
#include "movie.h"
#include "rental.h"

class Customer
{
public:
    Customer(std::string name);
    void addRental(Rental arg);
    std::string getName();
    std::string statement();
    std::vector<Rental>& getRentals();
    double amountFor(Rental aRental);
    double getTotalCharge();
    int getTotalfrequentRenterPoints();

private:
    std::string _name;                  //顾客名
    std::vector<Rental> _rentals;       //租赁列表
};

#endif // CUSTOMER_H
