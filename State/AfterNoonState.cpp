#include "AfterNoonState.h"



AfterNoonState::AfterNoonState()
{
}


AfterNoonState::~AfterNoonState()
{
}

void AfterNoonState::coding(Work * work)
{
	if (work->getHours() < 17)
		std::cout << "��ǰʱ�䣺" << work->getHours() << "�㣬����״̬��������Ŭ��" << std::endl;
	else {
		work->setCurrentState(new EveningState());
		work->coding();
	}
}
