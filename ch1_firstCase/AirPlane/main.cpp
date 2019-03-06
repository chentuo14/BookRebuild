#include <iostream>
#include "airplane.h"

using namespace std;

int main()
{
    /*
            你实例化了一架 新的飞机，这个时候 作为 Pattern Art Online 游戏的 元老玩家。
            你需要赶过去支援你的 队友！
            前线目前已经非常紧张，导致你起飞的动作僵硬无比。
        */
    /*好的，我创建了一架飞机*/
    AirPlane *air = new AirPlane();
    /*随便取个名字，Alier Two 号*/
    air->setName("Alier Tow");
    /*起飞吧！我要赶快去 救我的队友*/
    air->fly();    /*输出: ERROR: Can't do fly!! You are not Power!*/
    /*该死，太紧张了，毕竟时间紧，你，就你，快加满油！*/
    air->setState(new StateNotFly());    //状态改成一切就绪，但没有正在飞行
    /*很好，油满了，给我拉升！*/
    air->up();    /*输出: ERROR: Can't do up!! You are not 'Flying'!*/
    /*可恶，忘记先发动 螺旋桨了。。。*/
    air->fly();    /*输出: INFO: OK!*/
    /*哈哈哈，飞起来了！*/
    air->setState(new StateFlying());    //状态改成 飞行ing
    /*给我飞高点*/
    air->up();    /*输出: INFO: OK! up*/

    /* ---五个小时的飞行后---*/

    /*咦？怎么回事，螺旋桨不转了？*/
    air->setState(new StateNotPower());
    /*卧槽，忘记带后备用油了，我可是要飞到 北美洲去啊！总部，总部！请求加油机支援！！！*/
    /*可恶。给我飞高点！！！*/
    /* ---距离地面还剩 800米--- */
    air->up();    /*输出: ERROR: Can't do up!! You are not Power!*/
    /*不...不要啊！不管什么，给我飞起来啊！！！*/
    air->fly();    /*救命啊： ERROR: Can't do fly!! You are not Power!*/
    /* ---即将坠机--- */
    /* ...砰... */
    /* --- You die--- */

    cin.get();

    delete air;        /*可怜的你，还没有飞到前线就坠机了，真是.....*/
    return 0;
}

