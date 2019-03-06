#include "statenotfly.h"
#include <iostream>

StateNotFly::StateNotFly()
{

}

StateNotFly::~StateNotFly()
{

}

void StateNotFly::fly()
{
    //因为是 停机状态，所以是可以起飞的
    std::cout << "INFO: OK! " << std::endl;
}

void StateNotFly::stopfly()
{
    //你难道可以 停机之后 再停机么？
    std::cout << "ERROR: Can't do this!! You are not 'Flying'! " << std::endl;
}

void StateNotFly::up()
{
    //停机的时候这些空中动作就算了吧
    std::cout << "ERROR: Can't do up!! You are not 'Flying'! " << std::endl;
}

void StateNotFly::down()
{
    //停机的时候这些空中动作就算了吧
    std::cout << "ERROR: Can't do down!! You are not 'Flying'! " << std::endl;
}

