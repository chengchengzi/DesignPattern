#ifndef COMMAND_H_
#define COMMAND_H
#include"Command.h"

class Invoke{
	private:
		Command* command;
	public:
		void SetCommand(Command* command){
			this->command = command;
		}
		void ExecuteCommand(){
			command->Execute();
		}
};

#endif
