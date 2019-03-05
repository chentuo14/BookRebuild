#include "customer.h"

Customer::Customer(std::__cxx11::string name)
{
    _name = name;
}

void Customer::addRental(Rental arg)
{
    _rentals.push_back(arg);
}

std::__cxx11::string Customer::getName()
{
    return _name;
}

std::__cxx11::string Customer::statement()
{
    double totalAmount = 0;                 //总金额
    int frequentRenterPoints = 0;           //积分点
    
    std::string result = "Rental Record for " + getName() + "\n";
    std::vector<Rental>::iterator iter = _rentals.begin();
    for(;iter != _rentals.end();++iter) {
        double thisAmount = 0;              //当前单个租赁金额
        Rental each = *iter;

        thisAmount = amountFor(each);
        frequentRenterPoints++;         //每借一张加1个积分点
        //积分累加条件：新版本的片子，借的时间大于1天
        if((each.getMovie().getPriceCode() == 1) && each.getDaysRented() > 1) {
            frequentRenterPoints++;
        }
        //添加详单
        result += "\t" + each.getMovie().getTitle() + "\t"
                + std::to_string(thisAmount) + "\n";
        totalAmount += thisAmount;
    }
    //添加脚注
    result += "Amount owed is " + std::to_string(totalAmount) + "\n";
    result += "You earned " + std::to_string(frequentRenterPoints) +
            " frequent renter points" + "\n";
    return result;
}

std::vector<Rental> &Customer::getRentals()
{
    return _rentals;
}

double Customer::amountFor(Rental aRental)
{
    return aRental.getCharge();
}

