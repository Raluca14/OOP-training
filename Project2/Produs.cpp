#include "Produs.h"
#include <iostream>
#include <string.h>
	Produs::Produs(char s[6], int p):pret(p)
	{
		strcpy(cod,s);
	}
	Produs::Produs(){
		pret=0;
		for(int i=0;i<5;i++)
		{
			cod[i]='0';
		}
	}
	void Produs::afisare()
	{
		
			cout<<"\nCod Produs: "<<cod<<"\nPret: "<<pret;

}

