#include"UnitedNations.h"
#include"Country.h"
int main(){
	UnitedNationsSecurityCouncil* UNSC = new UnitedNationsSecurityCouncil();

	USA* usa = new USA(UNSC);
	Iraq* iraq = new Iraq(UNSC);

	UNSC->SetColleague1(usa);
	UNSC->SetColleague2(iraq);

	usa->Declare("不准研制核武器，否则发动战争！");
	iraq->Declare("我们没研制核武器，也不怕侵略");
	return 0;
}
