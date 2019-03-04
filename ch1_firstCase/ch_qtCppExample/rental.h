#ifndef RENTAL_H
#define RENTAL_H

#include "movie.h"

class Rental
{
public:
    Rental(Movie movie, int daysRented);

    int getDaysRented();
    Movie getMovie();

private:
    Movie _movie;
    int _daysRented;
};

#endif // RENTAL_H
