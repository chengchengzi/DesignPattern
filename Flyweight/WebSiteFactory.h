#ifndef _WEBSITEFACTORY
#define _WEBSITEFACTORY
#include"WebSite.h"
#include<string>
#include<map>

class WebSiteFactory{
	private:
		std::map<std::string,WebSite*> flyweight;
	public:
		WebSiteFactory(){}
		~WebSiteFactory(){
			std::map<std::string, WebSite*>::iterator it;
			for(it = flyweight.begin();it!=flyweight.end();it++)
				delete it->second;
		}
		WebSite* GetWebSiteCategory(std::string key){
			std::map<std::string,WebSite*>::iterator it;
			for(it = flyweight.begin();it != flyweight.end();it++)
				if(it->first == key)
					return it->second;

			WebSite* website = new ConcreteWebSite(key);
			flyweight.insert(std::pair<std::string,WebSite*>(key,website));
			return website;
		}
		int GetWebSiteCount(){
			return flyweight.size();
		}
};
#endif
