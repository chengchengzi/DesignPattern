#ifndef _SUBJECT
#define _SUBJECT

#include<string>
#include<vector>
class Observe;

class Subject{
	private:
		std::string subject_state;
	public:
		virtual void Attach(Observe* observe)=0;
		virtual void Detach(Observe* observe)=0;
		virtual void Notify()=0;
		void setSubjectState(std::string state){
			this->subject_state = state;
		}
		std::string getSubjectState(){
			return subject_state;
		}
};

class Boss : public Subject{
	private:
		std::vector<Observe*> observes;
		std::string boss_state;
	public:
		void Attach(Observe* observe){
			observes.push_back(observe);
		}
		void Detach(Observe* observe){
			std::vector<Observe*>::iterator it = observes.begin();
			while((*it) != observe && it != observes.end())
				it++;
			if((*it) != nullptr && it != observes.end())
				observes.erase(it);
		}
		void Notify(){
			std::vector<Observe*>::iterator it;
			for(it = observes.begin();it != observes.end();it++)
				(*it)-> Update();
		}
		void setBossState(std::string state){
			this->boss_state = state;
		}
		std::string getBossState(){
			return boss_state;
		}
};

class Secretary : public Subject{
	private:
         std::vector<Observe*> observes;
         std::string secretary_state;
    public:
         void Attach(Observe* observe){
             observes.push_back(observe);
         }
         void Detach(Observe* observe){
			 std::vector<Observe*>::iterator it = observes.begin();
			 while((*it) != observe && it != observes.end())
				 it++;
			 if((*it) != nullptr && it != observes.end())
				observes.erase(it);
         }
         void Notify(){
	         std::vector<Observe*>::iterator it;
	         for(it = observes.begin();it != observes.end();it++)
	               (*it)->Update();
	         }
	     void setSecretaryState(std::string state){
	         this->secretary_state = state;
	      }
         std::string getSecretaryState(){
              return secretary_state;
         }
};
#endif


