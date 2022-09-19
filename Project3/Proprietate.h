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
	virtual void afisare();  
	virtual~Proprietate();
	virtual double getVenit()const;
	bool testValoare(double);
};//venitul generat de o proprietate pe luna e 0
