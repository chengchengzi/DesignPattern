#ifndef _USER
#define _USER
#include<string>
class User{
	private:
		std::string name;
	public:
		User(std::string name){
			this->name = name;
		}
		std::string GetUser(){
			return this->name;
		}
};
#endif
