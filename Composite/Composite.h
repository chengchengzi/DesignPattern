#ifndef COMPOSITE_H_
#define COMPOSITE_H_

#include<iostream>
#include<list>
#include<string>

//Company类
class Company{
	protected:
		std::string name;
	public:
			Company(std::string name){
				this->name = name;
			}
			virtual void Add(Company* c) = 0;
			virtual void Remove(Company* c) = 0;
			virtual void Display(int depth) = 0;
			virtual void LineOfDuty() = 0;

			inline bool operator==(const Company &company) const{
				return this->name == company.name;
			}
};

//ConcreteCopany类
class ConcreteCompany : public Company{
	private:
		std::list<Company*> *children;
	public:
		ConcreteCompany(std::string name):Company(name){
			children = new std::list<Company*>;
		}

		~ConcreteCompany(){
			for(std::list<Company*>::iterator it = children->begin(); it != children->end() ;it++)
				delete *it;
			delete children;
		}

		void Add(Company *c){
			children->push_back(c);
		}

		void Remove(Company* c){
			for(std::list<Company*>::iterator it = children->begin(); it != children->end();it++){
				if(**it == *c){
					children->erase(it);
					break;
				}
			}
		}

		void Display(int depth){
			for(int i = 0; i < depth; i++)
				std::cout << "-";
			std::cout << name << std::endl;
			
			for(std::list<Company*>::iterator it = children->begin(); it != children->end();it++)
				(*it)->Display(depth + 4);
		}

		void LineOfDuty(){
			for(std::list<Company*>::iterator it = children->begin(); it != children->end(); it++)
				(*it)->LineOfDuty();
		}
};

//HRDept
class HRDept : public Company{
	public:
		HRDept(std::string name):Company(name){}

		void Add(Company* c){}
		void Remove(Company* c){}
		void Display(int depth){
			for(int i = 0; i < depth; i++)
				std::cout << "-";
			std::cout << name << std::endl;
		}

		void LineOfDuty(){
			std::cout << name << " staff management" << std::endl;
		}
};

//FinanceDept
class FinanceDept : public Company{
	public:
		FinanceDept(std::string name):Company(name){}
		void Add(Company* c){}
		void Remove(Company* c){}
		void Display(int depth){
			for(int i = 0; i < depth; i++)
				std::cout << "-";
			std::cout << name << std::endl;
		}

		void LineOfDuty(){
			std::cout << name << " Finance management" << std::endl;
		}
};


#endif
