#include "ForeNoonState.h"



ForeNoonState::ForeNoonState()
{
}


ForeNoonState::~ForeNoonState()
{
}

void ForeNoonState::coding(Work *work)
{
	if (work->getHours() < 12)
		std::cout << "��ǰʱ�䣺" << work->getHours() << "�㣬���繤��������ٱ�" << std::endl;
	else {
		work->setCurrentState(new NoonState());
		work->coding();
	}
}
