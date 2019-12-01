#ifndef _OBSERVE
#define _OBSERVE

#include<iostream>
#include"Subject.h"

class Observe{
	protected:
		std::string name;
		Subject* sub;
	public:
		Observe(){}
		Observe(std::string name, Subject* sub){
			this->name = name;
			this->sub = sub;
		}
		virtual void Update()=0;
};

class StockObserve:public Observe{
	public:
		StockObserve(){}
		StockObserve(std::string name, Subject* sub){
			this->name = name;
			this->sub = sub;
		}
		void Update(){
			std::cout << sub->getSubjectState() << ", " << name << ",关闭股票行情，继续工作！" << std::endl;
		}
};

class NBAObserve : public Observe{
	public:
		NBAObserve(){}
		NBAObserve(std::string name, Subject* sub){
			this->name = name;
			this->sub = sub;
		}
		void Update(){
			std::cout << sub->getSubjectState() << ", " << name << ",关闭股票行情，继续工作！" << std::endl;
		}
};

#endif
