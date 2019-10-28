#include"Manager.h"

using namespace std;

int main(){
	CommonManager common_manager("经理");
	MajorDomo major_domo("总监");
	GeneralManager general_manager("总经理");
	
	common_manager.SetSuperior(&major_domo);
	major_domo.SetSuperior(&general_manager);

	Request request;
	request.type = "请假";
	request.content = "张三请假";
	request.num = 1;
	common_manager.RequestApplications(request);

	Request request2;
	request2.type = "加薪";
	request2.content = "张三申请加薪";
	request2.num = 450;
	common_manager.RequestApplications(request2);

	Request request3;
	request3.type = "加薪";
	request3.content = "张三申请加薪";
	request3.num = 1000;
	common_manager.RequestApplications(request3);
	return 0;

}

