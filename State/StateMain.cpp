// StateMain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Work.h"
int main()
{
	Work *work = new Work();
	work->setHours(9.0);
	work->coding();
	work->setHours(10.0);
	work->coding();
	work->setHours(12.0);
	work->coding();
	work->setHours(13.0);
	work->coding();
	work->setHours(14.0);
	work->coding();
	work->setHours(17.0);
	work->coding();

	work->setHours(18.0);
	//work->setFinish(true);
	work->setFinish(false);
	work->coding();

	work->setHours(19.0);
	work->coding();
	work->setHours(22.0);
	work->coding();

	return 0;
}


