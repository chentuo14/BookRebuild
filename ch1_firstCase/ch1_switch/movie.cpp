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

double Movie::getCharge(int daysRented)
{
    double result = 0;
    switch(getPriceCode()) {
    case Movie::REGULAR:             //普通片，起步价为2元，租期超过2天的部分每天1.5元
        result += 2;
        if(daysRented > 2)
            result += (daysRented - 2) * 1.5;
        break;
    case Movie::NEW_RELEASE:             //新片，每天3元
        result += daysRented * 3;
        break;
    case Movie::CHILDRENS:             //儿童片，起步价1.5元，租期超过3天的部分每天1.5元
        result += 1.5;
        if(daysRented > 3)
            result += (daysRented - 3) * 1.5;
        break;
    }

    return result;
}

int Movie::getFrequentRenterPoints(int daysRented)
{
    //积分累加条件：新版本的片子，借的时间大于1天
    if((getPriceCode() == 1) && daysRented > 1) {
        return 2;
    } else {
        return 1;       //每借一张加1个积分点
    }
}

