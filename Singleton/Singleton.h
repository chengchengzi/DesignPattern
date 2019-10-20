class Singleton{
	private:
		static Singleton* instance;
	private:
		Singleton(){};
	public:
		static Singleton* GetInstance(){
			if(instance == NULL){
				instance = new Singleton();
			}
			return instance;
		}


};
