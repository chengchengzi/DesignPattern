#include"UnitedNations.h"
#include"Country.h"
#include<string>

void UnitedNationsSecurityCouncil::SetColleague1(Country* usa){
	this->colleague1 = usa;
}

void UnitedNationsSecurityCouncil::SetColleague2(Country* iraq){
	this->colleague2 = iraq;
}

void UnitedNationsSecurityCouncil::Declare(std::string message,Country* colleague){
	if(colleague == colleague1){
		colleague2->GetMessage(message);
	}
	else{
		colleague1->GetMessage(message);
	}
}
