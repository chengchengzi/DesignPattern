#pragma once
#include"State.h"
#include"ForeNoonState.h"
class Work
{
private:
	State *current_state;  //��ǰ����״̬
	double hours; //��ǰ����ʱ��
	bool finish; //�����Ƿ����

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

