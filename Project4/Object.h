#pragma once
#include <fstream>
using namespace std;
class Object{
	public:
	virtual int getPret()=0;
	virtual void afisare(ofstream &)=0;
	virtual ~Object(){
	}
	
};
