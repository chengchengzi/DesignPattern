#include "NoonState.h"



NoonState::NoonState()
{
}


NoonState::~NoonState()
{
}

void NoonState::coding(Work * work)
{
	if (work->getHours() < 13)
		std::cout << "��ǰʱ�䣺" << work->getHours() << "�㣬���ˣ��緹������������" << std::endl;
	else {
		work->setCurrentState(new AfterNoonState());
		work->coding();
	}
}

