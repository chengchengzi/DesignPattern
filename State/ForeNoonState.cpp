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
		std::cout << "当前时间：" << work->getHours() << "点，上午工作，精神百倍" << std::endl;
	else {
		work->setCurrentState(new NoonState());
		work->coding();
	}
}
