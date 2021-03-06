#include "movie.h"

Movie::Movie(std::__cxx11::string title, int price)
{
    _title = title;
    setPriceCode(price);
}

int Movie::getPriceCode()
{
    return _price->getPriceCode();
}

void Movie::setPriceCode(int arg)
{
    switch(arg) {
    case Movie::REGULAR:
        _price = new RegularPrice();
        break;
    case Movie::CHILDRENS:
        _price = new ChildrensPrice();
        break;
    case Movie::NEW_RELEASE:
        _price = new NewReleasePrice();
        break;
    default:
        std::cout << "Incorrect Price Code"<<std::endl;
    }
}

std::__cxx11::string Movie::getTitle()
{
    return _title;
}

double Movie::getCharge(int daysRented)
{
    return _price->getCharge(daysRented);
}

int Movie::getFrequentRenterPoints(int daysRented)
{
    return _price->getFrequentRenterPoints(daysRented);
}

