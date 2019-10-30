#ifndef _COUNTRY
#define _COUNTRY
#include"UnitedNations.h"
#include<iostream>
#include<string>
class Country{
	protected:
		UnitedNations* mediator;
	public:
		
		virtual void Declare(std::string message) = 0;
		virtual void GetMessage(std::string message) = 0;
};

class USA : public Country{
	public:
		
		USA(UnitedNations* mediator){
			this->mediator = mediator;
		}
		void Declare(std::string message);
		void GetMessage(std::string message);
};

class Iraq : public Country{
	public:
		Iraq(UnitedNations* mediator){
			this->mediator = mediator;
		}
		void Declare(std::string message);
		void GetMessage(std::string message);
};
#endif
