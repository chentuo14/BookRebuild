#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie
{
public:
    enum category {
        REGULAR = 0,            //普通影片
        NEW_RELEASE,            //新片
        CHILDRENS               //儿童影片
    };

    Movie(std::string title = "empty", int price = 0);

    int getPriceCode();
    void setPriceCode(int arg);
    std::string getTitle();
    double getCharge(int daysRented);
    int getFrequentRenterPoints(int daysRented);


private:
    std::string _title;                 //影片名
    int _priceCode;                     //价格码
};


#endif // MOVIE_H
