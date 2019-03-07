#include "rental.h"

Rental::Rental(Movie movie, int daysRented)
{
    _movie = movie;
    _daysRented = daysRented;
}

int Rental::getDaysRented()
{
    return _daysRented;
}

Movie Rental::getMovie()
{
    return _movie;
}

double Rental::getCharge()
{
    return getMovie().getCharge(_daysRented);
}

int Rental::getFrequentRenterPoints()
{
    //积分累加条件：新版本的片子，借的时间大于1天
    if((getMovie().getPriceCode() == 1) && getDaysRented() > 1) {
        return 2;
    } else {
        return 1;                   //每借一张加1个积分点
    }
}

