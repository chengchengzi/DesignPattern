#include"RoleStateManage.h"
#include<iostream>
class GameRole{
private:
        int vit;
        int ack;
        int def;
public:
        void RecoveryState(RoleStateMemento memento);
        RoleStateMemento SaveRoleState();
        void GetInitState();
        void StateDisplay();
        void Fight();

};

