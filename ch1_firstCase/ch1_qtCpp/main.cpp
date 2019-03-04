#include <iostream>
#include <string>
#include <vector>

#include "movie.h"
#include "rental.h"
#include "customer.h"

using namespace std;

int main()
{
    /* create 10 movies */
    std::vector<Movie> movies;
    for(int i=0;i<10;i++) {
        Movie tempMovie("Movie"+std::to_string(i+1), i+1);
        movies.push_back(tempMovie);
    }

    /* create 5 customers */
    std::vector<Customer> customers;
    for(int i=0;i<5;i++) {
        Customer tempCustomers("customer" + std::to_string(i+1));
        for(int j=2*i;j<2*i+2;++j) {
            Movie tempMovie = movies[j];
            Rental tempRent(tempMovie, i+1);
            tempCustomers.addRental(tempRent);
        }

        customers.push_back(tempCustomers);
    }

    //print out all movies information;
    const std::vector<Movie>::size_type numMovies = movies.size();
    for(int i=0;i<numMovies;++i) {
        Movie tempMovie = movies[i];
        std::cout << " the Tile of the "<<i+1 << "("
                 << tempMovie.getTitle() << "," << tempMovie.getPriceCode() << ")"
                 << std::endl;
    }
    std::cout << std::endl;

    //print out all customers information
    const std::vector<Customer>::size_type numCustomers = customers.size();
    for(int i=0;i<numCustomers;++i) {
        Customer tempCust = customers[i];
        std::cout << "the " << std::to_string(i+1) << " the customer " << tempCust.getName()
                  << " has rented these movies:" << std::endl;
        const std::vector<Rental>::size_type numRentals = tempCust.getRentals().size();
        for(int j=0;j<numRentals;++j) {
            std::cout << "    (" << tempCust.getRentals()[j].getMovie().getTitle()
                      << ", " << tempCust.getRentals()[j].getDaysRented() << ")" << std::endl;
        }
    }
    std::cout << std::endl;

    for(int i=0;i<numCustomers;++i) {
        Customer tempCust = customers[i];
        std::cout << tempCust.statement() << std::endl;
    }

    return 0;
}

