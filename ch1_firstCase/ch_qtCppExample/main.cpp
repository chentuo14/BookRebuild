#include <iostream>
#include <string>
#include "movie.h"
#include "rental.h"
#include "customer.h"

using namespace std;

int main()
{
    // set up movie information
        vector<Movie> movies;
        for (int i = 0; i < 30; ++i)
        {
            Movie tempMovie("Movie" + std::to_string(i+1), i+1);
            movies.push_back(tempMovie);
        }

        // set up rental information on top of movies
        // set up customer information on top of rentals
        vector<Customer> customers;
        for (int i = 0; i < 5; ++i)
        {
            Customer tempCust("customer" + std::to_string(i+1));
            for (int j = 6 * i; j < 6 * i + 6; ++j)
            {
                Movie tempMovie = movies[j];
                Rental tempRent(tempMovie, i+1); // set max rental days to 15
                tempCust.addRental(tempRent);
            }

            customers.push_back(tempCust);
        }

        // test code
        //(1) print out information of all movies
        const vector<Movie>::size_type numMovies = movies.size();
        for (int i = 0; i < numMovies; ++i)
        {
            cout << "the Title of the " << i + 1 << " th movie and its price is : (" << movies[i].getTitle() << ", " << movies[i].getPriceCode() << ")" << std::endl;
        }

        cout << endl;

        // (2) print out information of all customers
        const vector<Customer>::size_type numCustomers = customers.size();
        for (int i = 0; i < numCustomers; ++i)
        {
            Customer tempCust = customers[i];
            cout << "the " << i+1 << " th customer '" << tempCust.getName() << "' has rented these movies:" << endl;
            const vector<Rental>::size_type numRentals = tempCust.getRentals().size();
            for (int j = 0; j < numRentals; ++j)
            {
                cout << "         " << "( " << tempCust.getRentals()[j].getMovie().getTitle() << ", " << tempCust.getRentals()[j].getDaysRented() << ")" << endl;
            }
        }

        cout << endl;

        // (3) test statement() in Customer
        for (int i = 0; i < numCustomers; ++i)
        {
            Customer tempCust = customers[i];
            cout << tempCust.statement() << endl;
        }

        return 0;
}

