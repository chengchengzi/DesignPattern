#include "EveningState.h"



EveningState::EveningState()
{
}


EveningState::~EveningState()
{
}

void EveningState::coding(Work * work)
{
	if (work->getFinish()) {
		work->setCurrentState(new RestState());
		work->coding();
	}
	else{
		if (work->getHours() < 21)
			std::cout << "��ǰʱ�䣺" << work->getHours() << "�㣬�Ӱ࣬ƣ��֮��" << std::endl;
		else {
			work->setCurrentState(new SleepingState());
			work->coding();
		}
	}
}
