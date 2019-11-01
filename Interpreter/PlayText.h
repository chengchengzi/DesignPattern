#ifndef _PLAYTEXT
#define _PLAYTEXT
#include<string>

class PlayText{
	private:
		std::string text;
	public:
		void SetText(std::string text){
			this->text = text;
		}
		std::string GetText(){
			return text;
		}
};
#endif
