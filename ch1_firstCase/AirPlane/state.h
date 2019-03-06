#ifndef STATE_H
#define STATE_H


class State
{
public:
    State();
    virtual ~State();

    virtual void fly()=0;      //起飞   =0是纯虚函数，可以理解为子类必须实现的 抽象方法
    virtual void stopfly()=0;   //停止飞行，降落
    virtual void up()=0;        //拉升飞行高度
    virtual void down()=0;      //拉低飞行高度
};

#endif // STATE_H
