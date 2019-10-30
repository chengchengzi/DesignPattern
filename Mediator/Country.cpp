#include"Country.h"
#include<string>
#include<iostream>

void USA::Declare(std::string message){
	mediator->Declare(message,this);
}

void USA::GetMessage(std::string message){
	std::cout << "美国获得对方消息：" << message << std::endl;
}

void Iraq::Declare(std::string message){
	mediator->Declare(message,this);
}

void Iraq::GetMessage(std::string message){
	std::cout << "伊拉克获得对方消息：" << message << std::endl;
}

