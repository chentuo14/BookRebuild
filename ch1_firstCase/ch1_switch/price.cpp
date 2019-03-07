#include "price.h"

int ChildrensPrice::getPriceCode()
{
    return Movie::CHILDRENS;
}

double ChildrensPrice::getCharge(int daysRented)
{
    double result = 1.5;
    if(daysRented > 3)
        result += (daysRented - 3) * 1.5;
    return result;
}

int NewReleasePrice::getPriceCode()
{
    return Movie::NEW_RELEASE;
}

double NewReleasePrice::getCharge(int daysRented)
{
    double result = daysRented * 3;
    return result;
}

int RegularPrice::getPriceCode()
{
    return Movie::REGULAR;
}

double RegularPrice::getCharge(int daysRented)
{
    double result = 2;
    if(daysRented > 2)
        result += (daysRented - 2) * 1.5;
    return result;
}
