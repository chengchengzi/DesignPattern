#include"RoleStateManage.h"
RoleStateManage::RoleStateManage(){
}
RoleStateManage::~RoleStateManage(){
}
void RoleStateManage::setMemento(RoleStateMemento memento){
	this->memento = memento;
}
RoleStateMemento RoleStateManage::getMemento(){
	return memento;
}
