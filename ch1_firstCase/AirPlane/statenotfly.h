#ifndef STATENOTFLY_H
#define STATENOTFLY_H

#include "state.h"

//状态类: 停机状态
class StateNotFly : public State
{
public:
    StateNotFly();
    virtual ~StateNotFly();
    virtual void fly();         //起飞
    virtual void stopfly();     //停止飞行，降落
    virtual void up();          //拉升飞行高度
    virtual void down();        //拉低飞行高度
};

#endif // STATENOTFLY_H
