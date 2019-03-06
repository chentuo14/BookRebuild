#ifndef STATENOTPOWER_H
#define STATENOTPOWER_H

#include "state.h"

//状态类: 没有动力状态
class StateNotPower : public State
{
public:
    StateNotPower();
    virtual ~StateNotPower();

    virtual void fly();         //起飞
    virtual void stopfly();     //停止飞行，降落
    virtual void up();          //拉升飞行高度
    virtual void down();        //拉低飞行高度
};

#endif // STATENOTPOWER_H
