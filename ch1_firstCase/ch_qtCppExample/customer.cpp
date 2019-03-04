#include "customer.h"

Customer::Customer(std::__cxx11::string name)
    :_name(name)
{
    _rentals = vector<Rental>();
}

Customer::~Customer()
{
    _rentals.clear();
}

void Customer::addRental(Rental arg)
{
    _rentals.push_back(arg);
}

vector<Rental> &Customer::getRentals()
{
    return _rentals;
}

std::__cxx11::string Customer::getName()
{
    return _name;
}

std::__cxx11::string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;

    string result = "Rental Record for " + getName() + "\n";
    vector<Rental>::iterator iterVec = _rentals.begin();
    for (; iterVec != _rentals.end(); ++iterVec)
    {
        double thisAmout = 0;
        Rental each = *iterVec;

        // determine amounts for each line
        switch(each.getMovie().getPriceCode())
        {
        //case Movie::REGULAR:
        case 0:
            thisAmout += 2;
            if (each.getDaysRented() > 2)
            {
                thisAmout += (each.getDaysRented() - 2) * 1.5;
            }
            break;
        //case Movie::NEW_RELEASE:
        case 1:
            thisAmout += each.getDaysRented() * 3;
            break;
        //case Movie::CHILDRENS:
        case 2:
            thisAmout += 1.5;
            if (each.getDaysRented() > 3)
            {
                thisAmout += (each.getDaysRented() - 3) * 1.5;
            }
            break;
        }

        // add frequent renter points
        ++frequentRenterPoints;
        // add bonus for a two day new release rental
        if ((each.getMovie().getPriceCode() == Movie::NEW_RELEASE) && each.getDaysRented() > 1)
        {
            ++frequentRenterPoints;
        }
        // show figures for this rental
        result += "\t" + each.getMovie().getTitle() + "\t" + std::to_string(thisAmout);
    }
    // add footer lines
    result += "Amount owed is " + std::to_string(totalAmount) + "\n";
    result += "You earned " + std::to_string(frequentRenterPoints) + "frequent renter points";

    return result;
}
