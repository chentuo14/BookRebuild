#include "movie.h"

const int REGULAR = 0;          //普通影片
const int NEW_RELEASE = 1;      //新片
const int CHILDRENS = 2;        //儿童影片

Movie::Movie(std::__cxx11::string title, int price)
    :_title(title), _priceCode(price)
{

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

