#include"Observe.h"
using namespace std;

int main(){
	Subject* boss = new Boss();
	boss->setSubjectState("我huhansan回来了");

	Observe* xiaowang = new StockObserve("xiaowang",boss);
	Observe* zhangsan = new NBAObserve("zhangsan",boss);

	boss->Attach(xiaowang);
	boss->Attach(zhangsan);

	boss->Detach(xiaowang);

	boss->Notify();
	return 0;
}
