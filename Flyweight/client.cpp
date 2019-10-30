#include"User.h"
#include"WebSite.h"
#include"WebSiteFactory.h"

using namespace std;

int main(){
	WebSiteFactory f;

	WebSite* fx = f.GetWebSiteCategory("产品展示");
	fx->Use(User("张三"));

	WebSite* fy = f.GetWebSiteCategory("产品展示");
	fy->Use(User("李四"));

	WebSite* fz = f.GetWebSiteCategory("博客");
	fz->Use(User("赵钱"));

	return 0;
}
