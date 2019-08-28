class RoleStateMemento{
private:
	int vit;
	int ack;
	int def;
public:
	RoleStateMemento();
	RoleStateMemento(int v,int a,int d):vit(v),ack(a),def(d){}
	~RoleStateMemento();
	void setVit(int v);
	int getVit();
	void setAck(int a);
	int getAck();
	void setDef(int d);
	int getDef();
}; 
