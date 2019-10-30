#ifndef _UNITEDNATIONS
#define _UNITEDNATIONS
class Country;
#include<string>

class UnitedNations{
	public:
		virtual void SetColleague1(Country* usa) = 0;
		virtual void SetColleague2(Country* iraq) = 0;
		virtual void Declare(std::string message, Country* country) = 0;
};

class UnitedNationsSecurityCouncil : public UnitedNations{
	private:
		Country* colleague1;
		Country* colleague2;
	public:
		void SetColleague1(Country* usa);
		void SetColleague2(Country* iraq);

		void Declare(std::string message, Country* country);
};
#endif
		
