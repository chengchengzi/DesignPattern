#pragma once
#include"State.h"
#include"ForeNoonState.h"
class Work
{
private:
	State *current_state;  //当前工作状态
	double hours; //当前工作时间
	bool finish; //工作是否完成

public:
	Work();
	~Work();

	void setHours(double hours);
	double getHours();
	void setFinish(bool finish);
	bool getFinish();
	void setCurrentState(State* current_state);
	void coding();
};

