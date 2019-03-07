#include "movie.h"

Movie::Movie(std::__cxx11::string title, int price)
{
    _title = title;
    _priceCode = price;
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

