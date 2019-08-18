#include "Work.h"



Work::Work()
{
	current_state = new ForeNoonState();
}


Work::~Work()
{

}

void Work::setHours(double hours)
{
	this->hours = hours;
}

double Work::getHours()
{
	return this->hours;
}

void Work::setFinish(bool finish)
{
	this->finish = finish;
}

bool Work::getFinish()
{
	return finish;
}

void Work::setCurrentState(State * current_state)
{
	this->current_state = current_state;
}

void Work::coding()
{
	current_state->coding(this);
}

