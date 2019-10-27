#ifndef RECEIVER_H_
#define RECEIVER_H_
#include"Receiver.h"

class Command{
	protected:
		Receiver receiver;
	public:
		Command(){}
		Command(Receiver receiver){
			this->receiver = receiver;
		}
		virtual void Execute() = 0;
};

class ConcreteCommand : public Command{
	public:
		ConcreteCommand(){}
		ConcreteCommand(Receiver receiver){}
		void Execute(){
			receiver.Action();
		}
};
#endif
