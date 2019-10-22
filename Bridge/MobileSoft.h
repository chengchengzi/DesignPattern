#include<iostream>
class MobileSoft{
	public:
		virtual void run() = 0;
};

class Game : public MobileSoft{
	public:
		void run(){
			std::cout << "Game running" << std::endl;
		}
};

class AddressList : public MobileSoft{
	public:
		void run(){
			std::cout << "AddressList running" << std::endl;
		}
};
