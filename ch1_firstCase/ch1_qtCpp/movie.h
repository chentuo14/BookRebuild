#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie
{
public:
    Movie(std::string title = "empty", int price = 0);

    int getPriceCode();
    void setPriceCode(int arg);
    std::string getTitle();

    static const int REGULAR;          //普通影片
    static const int NEW_RELEASE;      //新片
    static const int CHILDRENS;        //儿童影片
private:
    std::string _title;                 //影片名
    int _priceCode;                     //价格码
};


#endif // MOVIE_H
