#include "airplane.h"


AirPlane::AirPlane()
{  
    this->state = new StateNotPower();    //初始化状态为 “没有动力” 状态
}

AirPlane::~AirPlane()
{
    delete this->state;    //记得释放喔~
}

void AirPlane::setName(const char *name)
{
    this->name = name;    //赋值
}

void AirPlane::setState(State *state)
{
    delete this->state;    //先释放原来的
    this->state = state;    //改成新的状态
}

void AirPlane::fly()
{
    std::cout << "[AirPlane][" << this->name << "] ";
    this->state->fly();
}

void AirPlane::stopfly()
{
    std::cout << "[AirPlane][" << this->name << "] ";
    this->state->stopfly();
}

void AirPlane::up()
{
    std::cout << "[AirPlane][" << this->name << "] ";
    this->state->up();
}

void AirPlane::down()
{
    std::cout << "[AirPlane][" << this->name << "] ";
    this->state->down();
}

