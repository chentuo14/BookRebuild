#include "stateflying.h"
#include <iostream>

StateFlying::StateFlying()
{

}

StateFlying::~StateFlying()
{

}

void StateFlying::fly()
{
    //因为飞机正在飞行，所以不能再度起飞
    std::cout << "ERROR: Can't do this!! You are not 'stopfly'! " << std::endl;
}

void StateFlying::stopfly()
{
    //正在飞行的时候当然可以降落
    std::cout << "INFO: OK! stopfly" << std::endl;
}

void StateFlying::up()
{
    //目前的状况当然可以这样做
    std::cout << "INFO: OK! up" << std::endl;
}

void StateFlying::down()
{
    //目前的状况当然可以这样做
    std::cout << "INFO: OK! down" << std::endl;
}

