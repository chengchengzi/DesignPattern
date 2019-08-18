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
		std::cout << "当前时间：" << work->getHours() << "点，饿了，午饭；犯困，午休" << std::endl;
	else {
		work->setCurrentState(new AfterNoonState());
		work->coding();
	}
}

