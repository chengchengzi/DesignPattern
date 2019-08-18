#include "SleepingState.h"



SleepingState::SleepingState()
{
}


SleepingState::~SleepingState()
{
}

void SleepingState::coding(Work * work)
{
	std::cout << "当前时间：" << work->getHours() << "点，困得不行了，睡着了" << std::endl;
}
