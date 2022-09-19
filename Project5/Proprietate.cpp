#include "Proprietate.h"
#include "string.h"
Proprietate::Proprietate():valoare(0)
{
	for(int i=0;i<6;i++)
		cod[i]='0';
		
}
Proprietate::Proprietate(char c[6], double v):valoare(v)
{
	
		strcpy(cod,c);
}

void Proprietate::afisare()
{
	cout<<"\n\nProprietate: "<<"\nCod: ";

		cout<<cod;
	cout<<"\nValoare: "<<valoare;	
}
Proprietate::~Proprietate(){
}

double Proprietate::getVenit()const
{
	return 0;		
}
bool Proprietate::testValoare(double n)
{
	if(valoare>n)
		return true;
	return false;
}
