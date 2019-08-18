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
			std::cout << "当前时间：" << work->getHours() << "点，加班，疲累之极" << std::endl;
		else {
			work->setCurrentState(new SleepingState());
			work->coding();
		}
	}
}
