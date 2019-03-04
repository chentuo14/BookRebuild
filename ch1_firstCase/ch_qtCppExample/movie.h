#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using std::string;

class Movie
{
public:
    Movie(string title = "empty", int priceCode = 0);

    int getPriceCode();
    void setPriceCode(int arg);
    string getTitle();

    static const int REGULAR;
    static const int NEW_RELEASE;
    static const int CHILDRENS;

private:
    string _title;
    int _priceCode;
};

#endif // MOVIE_H
