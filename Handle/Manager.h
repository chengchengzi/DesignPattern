#ifndef REQUEST_H_
#define REQUEST_H_
#include"Request.h"
#include<iostream>
#include<string>

class Manager{
	protected:
		std::string name;
		Manager* superior;
	public:
		Manager(){}
		Manager(std::string name){
			this->name = name;
		}
		void SetSuperior(Manager* superior){
			this->superior = superior;
		}
		virtual void RequestApplications(Request request)=0;
};

class CommonManager : public Manager{
	public:
		CommonManager(){}
		CommonManager(std::string name){
			this->name = name;
		}
		void RequestApplications(Request request){
			if(request.type == "请假" && request.num <= 2){
				std::cout << this->name << " : " << request.content << "被批准" << std::endl;
			}
			else{
				if(superior != nullptr){
					superior->RequestApplications(request);
				}
			}
		}
};

class MajorDomo : public Manager{
	public:
		MajorDomo(){}
		MajorDomo(std::string name){
			this->name = name;
		}
		void RequestApplications(Request request){
			if(request.type == "请假" && request.num <=5){
				std::cout << this->name << ": " << request.content << "被批准" << std::endl;
			}else{
				if(superior != nullptr){
					superior->RequestApplications(request);
				}
			}
		}
};

class GeneralManager : public Manager{
	  public:
		  GeneralManager(){}
	     GeneralManager(std::string name){
		     this->name = name;
         }
         void RequestApplications(Request request){
             if(request.type == "请假"){
                 std::cout << this->name << ": " << request.content << "被批准" << std::endl;
             }else if(request.type == "加薪" && request.num <= 500){
				 std::cout << this->name << ": " << request.content << "被批准" << std::endl;
			 }else if(request.type == "加薪" && request.num > 500){
				 std::cout << this->name << ": " << request.content << " 需要考虑考虑." << std::endl;
			 }else{
				 if(superior != nullptr){
					 superior->RequestApplications(request);
				 }
			 }
		 }
};

#endif
