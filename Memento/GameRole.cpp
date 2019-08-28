#include"GameRole.h"
void GameRole::RecoveryState(RoleStateMemento memento){
	this->vit = memento.getVit();
	this->ack = memento.getAck();
	this->def = memento.getDef();
}
RoleStateMemento GameRole::SaveRoleState(){
	RoleStateMemento memento = RoleStateMemento(vit,ack,def);
	return memento;
}
void GameRole::GetInitState(){
	vit = 100;
	ack = 100;
	def = 100;
}
void GameRole::StateDisplay(){
	std::cout << "生命值：" << vit << std::endl;
	std::cout << "攻击力：" << ack << std::endl;
	std::cout << "防御力：" << def << std::endl;
}
void GameRole::Fight(){
	vit -= 70;
	ack -= 80;
	def -= 90;
}
