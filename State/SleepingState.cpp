#include "SleepingState.h"



SleepingState::SleepingState()
{
}


SleepingState::~SleepingState()
{
}

void SleepingState::coding(Work * work)
{
	std::cout << "��ǰʱ�䣺" << work->getHours() << "�㣬���ò����ˣ�˯����" << std::endl;
}
