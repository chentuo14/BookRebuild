#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include "state.h"
#include "stateflying.h"
#include "statenotfly.h"
#include "statenotpower.h"

/*这是 飞机类  这个类才是正在 在用上面的各种类*/
class AirPlane
{
private:
    std::string name;
    State *state;           //状态

public:
    AirPlane();
    ~AirPlane();
    void setName(const char *name);
    void setState(State *state);

    void fly();
    void stopfly();
    void up();
    void down();
};

#endif // AIRPLANE_H
