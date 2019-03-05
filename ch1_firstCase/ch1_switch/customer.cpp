#include "customer.h"

Customer::Customer(std::__cxx11::string name)
{
    _name = name;
}

void Customer::addRental(Rental arg)
{
    _rentals.push_back(arg);
}

std::__cxx11::string Customer::getName()
{
    return _name;
}

std::__cxx11::string Customer::statement()
{         
    std::string result = "Rental Record for " + getName() + "\n";
    std::vector<Rental>::iterator iter = _rentals.begin();
    for(;iter != _rentals.end();++iter) {
        Rental each = *iter;

        //添加详单
        result += "\t" + each.getMovie().getTitle() + "\t"
                + std::to_string(each.getCharge()) + "\n";
    }
    //添加脚注
    result += "Amount owed is " + std::to_string(getTotalCharge()) + "\n";
    result += "You earned " + std::to_string(getTotalfrequentRenterPoints()) +
            " frequent renter points" + "\n";
    return result;
}

std::vector<Rental> &Customer::getRentals()
{
    return _rentals;
}

double Customer::amountFor(Rental aRental)
{
    return aRental.getCharge();
}

double Customer::getTotalCharge()
{
    double result = 0;              //总金额
    std::vector<Rental>::iterator iter = _rentals.begin();
    for(;iter != _rentals.end();++iter) {
        Rental each = *iter;
        result += each.getCharge();
    }
    return result;
}

int Customer::getTotalfrequentRenterPoints()
{
    int result = 0;                 //积分点
    std::vector<Rental>::iterator iter = _rentals.begin();
    for(;iter != _rentals.end();++iter) {
        Rental each = *iter;
        result += each.getFrequentRenterPoints();
    }
    return result;
}

