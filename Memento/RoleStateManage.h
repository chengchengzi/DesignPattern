#include"RoleStateMemento.h"
class RoleStateManage{
private:
	RoleStateMemento memento;
public:
	RoleStateManage();
	~RoleStateManage();
	void setMemento(RoleStateMemento memento);
	RoleStateMemento getMemento();
};
