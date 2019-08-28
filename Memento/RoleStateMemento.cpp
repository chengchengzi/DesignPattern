#include"RoleStateMemento.h"
RoleStateMemento::RoleStateMemento(){
}
RoleStateMemento::~RoleStateMemento(){
}
void RoleStateMemento::setVit(int v){
	vit = v;
}
int RoleStateMemento::getVit(){
	return vit;
}
void RoleStateMemento::setAck(int a){
	ack = a;
}
int RoleStateMemento::getAck(){
	return ack;
}
void RoleStateMemento::setDef(int d){
	def = d;
}
int RoleStateMemento::getDef(){
	return def;
}
