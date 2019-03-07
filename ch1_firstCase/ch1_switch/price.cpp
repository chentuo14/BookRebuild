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

int NewReleasePrice::getFrequentRenterPoints(int daysRented)
{
    //积分累加条件：新版本的片子，借的时间大于1天
    return (daysRented > 1) ? 2 : 1;
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


int Price::getFrequentRenterPoints(int daysRented)
{
    return 1;           //每借一张加1个积分点
}
