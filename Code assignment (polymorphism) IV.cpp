#include <iostream>
using namespace std;

class AAA{
	public:
	virtual ~AAA(){
		cout<<"Destructor of AAA"<<endl;
	}
};

class BBB : public AAA{
	public:
	~BBB(){
		cout<<"Destructor of BBB"<<endl;
	}
};

class CCC : public BBB{
	public:
	~CCC(){
		cout<<"Destructor of CCC"<<endl;
	}
};

int main(){
	AAA *ptrA = new CCC();
	
	delete ptrA;
	
	return 0;
}


