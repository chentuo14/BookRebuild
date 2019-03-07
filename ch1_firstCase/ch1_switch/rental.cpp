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
    double result = 0;
    switch(getMovie().getPriceCode()) {
    case Movie::REGULAR:             //普通片，起步价为2元，租期超过2天的部分每天1.5元
        result += 2;
        if(getDaysRented() > 2)
            result += (getDaysRented() - 2) * 1.5;
        break;
    case Movie::NEW_RELEASE:             //新片，每天3元
        result += getDaysRented() * 3;
        break;
    case Movie::CHILDRENS:             //儿童片，起步价1.5元，租期超过3天的部分每天1.5元
        result += 1.5;
        if(getDaysRented() > 3)
            result += (getDaysRented() - 3) * 1.5;
        break;
    }

    return result;
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

