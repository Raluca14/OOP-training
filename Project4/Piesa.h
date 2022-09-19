#pragma once
#include "Object.h"
class Piesa:public Object{
protected: char cod[4];
           int pret;
public:
	Piesa():pret(0)
	{for(int i=0;i<4;i++)
		cod[i]='0';
    }
    Piesa(char c[],int p):pret(p){
    	for(int i=0;i<4;i++)
    	{
    		cod[i]=c[i];
		}
	}
	void afisare( ofstream &);
	int getPret(){
		return pret;
	}
};

