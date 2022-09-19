#pragma once
#include <iostream>

using namespace std;

class Proprietate {
protected: 
   char cod[6];
   double valoare;
public:
	Proprietate();
	Proprietate(char[],double); 
	void afisare();  
	~Proprietate();
	virtual double getVenit()const;
	bool testValoare(double);
	friend const bool operator>(Proprietate a, Proprietate b)
	{
		if(a.valoare>b.valoare) return true;
		else return false;
	}
	Proprietate &operator=(const Proprietate &p)
	{
		this->valoare=p.valoare;
		for(int i=0;i<6;i++)
		{
			this->cod[i]=p.cod[i];
		}
		return *this;
	}
		 friend ostream & operator << (ostream & dev,  Proprietate & p)
     {
	    dev << "Proprietate: ";
	    dev << "Cod: "<<p.cod;
	    dev<< p.valoare;
	    
	   
        dev<<endl;
	    return dev;
     }
};//venitul generat de o proprietate pe luna e 0
