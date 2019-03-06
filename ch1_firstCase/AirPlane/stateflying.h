#ifndef STATEFLYING_H
#define STATEFLYING_H

#include "state.h"

//状态类: 正在飞行 状态类
class StateFlying : public State
{
public:
    StateFlying();
    virtual ~StateFlying();
    virtual void fly();         //起飞
    virtual void stopfly();     //停止飞行，降落
    virtual void up();          //拉升飞行高度
    virtual void down();        //拉低飞行高度
};

#endif // STATEFLYING_H
