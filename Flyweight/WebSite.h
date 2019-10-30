#ifndef _WEBSITE
#define _WEBSITE
#include"User.h"
#include<string>
#include<iostream>
class WebSite{
	public:
		virtual void Use(User user)=0;
};

class ConcreteWebSite : public WebSite{
	private:
		std::string name;
	public:
		ConcreteWebSite(std::string name){
			this->name = name;
		}
		void Use(User user){
			std::cout << "网站分类：" << name << " 用户：" << user.GetUser() << std::endl;
		}
};
#endif

