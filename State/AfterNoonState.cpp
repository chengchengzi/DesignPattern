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
		std::cout << "当前时间：" << work->getHours() << "点，下午状态不错，继续努力" << std::endl;
	else {
		work->setCurrentState(new EveningState());
		work->coding();
	}
}
