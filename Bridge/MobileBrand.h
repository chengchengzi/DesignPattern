#ifndef MOBILESOFT_H_
#define MOBILESOFT_H_

#include"MobileSoft.h"

class MobileBrand{
	protected:
		MobileSoft* soft;
	public:
		void SetSoft(MobileSoft* soft){
			this->soft = soft;
		}
		virtual void run() = 0;
};

class BrandN : public MobileBrand{
	public:
		void run(){
			soft->run();
		}
};

class BrandM:public MobileBrand{
	public:
		void run(){
			soft->run();
		}
};
#endif	
