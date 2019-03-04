#include "movie.h"

const int Movie::REGULAR = 0;
const int Movie::NEW_RELEASE = 1;
const int Movie::CHILDRENS = 2;

Movie::Movie(std::__cxx11::string title, int priceCode)
{
    _title = title;
    _priceCode = priceCode;
}

int Movie::getPriceCode()
{
    return _priceCode;
}

void Movie::setPriceCode(int arg)
{
    _priceCode = arg;
}

std::__cxx11::string Movie::getTitle()
{
    return _title;
}

