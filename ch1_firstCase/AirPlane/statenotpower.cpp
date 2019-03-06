#include "statenotpower.h"
#include <iostream>

StateNotPower::StateNotPower()
{

}

StateNotPower::~StateNotPower()
{

}

void StateNotPower::fly()
{
    //没有动力了，无法起飞！
    std::cout << "ERROR: Can't do fly!! You are not Power!  " << std::endl;
}

void StateNotPower::stopfly()
{
    //没有动力了，赶紧降落
    std::cout << "INFO: OK! stopfly" << std::endl;
}

void StateNotPower::up()
{
    //没有动力，你是没法爬升的，等死吧！
    std::cout << "ERROR: Can't do up!! You are not Power!  " << std::endl;
}

void StateNotPower::down()
{
    //没有了动力了，但是可以 滑翔下降
    std::cout << "INFO: OK! down" << std::endl;
}

