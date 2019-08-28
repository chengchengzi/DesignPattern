#include"GameRole.h"
using namespace std;
int main(){
	GameRole role;
	cout << "初始化游戏角色： " << endl;
	role.GetInitState();
	role.StateDisplay();
	cout << "初始化完成！" << endl;
	
	RoleStateManage Admin;
	Admin.setMemento(role.SaveRoleState());
	cout << endl;
	cout << "角色战斗，消耗体能" << endl;
	role.Fight();
	role.StateDisplay();
	cout << endl;

	cout << "回到角色原始状态!" << endl;
	role.RecoveryState(Admin.getMemento());
	role.StateDisplay();
	
	return 0;
}
