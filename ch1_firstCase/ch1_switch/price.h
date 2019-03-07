#ifndef PRICE_H
#define PRICE_H

#include "movie.h"

class Price
{
public:
    virtual int getPriceCode() = 0;
    virtual double getCharge(int daysRented) = 0;
};

class ChildrensPrice : public Price
{
    int getPriceCode();
    double getCharge(int daysRented);
};

class NewReleasePrice : public Price
{
    int getPriceCode();
    double getCharge(int daysRented);
};

class RegularPrice : public Price
{
    int getPriceCode();
    double getCharge(int daysRented);
};

#endif // PRICE_H
