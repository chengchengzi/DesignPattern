#include"Invoke.h"
#include"Command.h"

int main(){
	Receiver receiver;
	Command* command = new ConcreteCommand(receiver);
	Invoke invoke;
	
	invoke.SetCommand(command);
	invoke.ExecuteCommand();	

	return 0;
}
