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
    return getMovie().getFrequentRenterPoints(_daysRented);
}

