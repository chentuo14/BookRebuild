#ifndef RENTAL_H
#define RENTAL_H

#include "movie.h"

class Rental
{
public:
    Rental(Movie movie, int daysRented);
    int getDaysRented();
    Movie getMovie();
    double getCharge();
    int getFrequentRenterPoints();

private:
    Movie _movie;       //租赁的影片
    int _daysRented;    //租期
};

#endif // RENTAL_H
