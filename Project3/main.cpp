#include <iostream>
#include "Imobil.h"
#include "Teren.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sortareVenit(Proprietate *v[],int n)
{
	for(int i=0;i<n-1;i++)
		for( int j=i;j<n;j++)
			if(v[i]->getVenit()<v[j]->getVenit())
			{
				Proprietate *aux;
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
}
int main(int argc, char** argv) {
/*	Proprietate p1("0298dh",9),p2;
	p1.afisare();
	p2.afisare(); */
	
/*	Imobil i1("hduwnd",100,10,"Nu are"),i2; 
	i1.afisare();
	i2.afisare();
	  */
/*	Teren t1("dhiebx",10,100,20), t2;
	t1.afisare();
	t2.afisare();
	return 0;*/
	Proprietate **v=new Proprietate*[3];
	v[0]=new Proprietate("uxhid",1);
	v[1]=new Imobil("fdihw",2,12,"Nu avem");
	v[2]=new Teren("tttt2",3,0.3,10);
	for(int i=0;i<3;i++)
		v[i]->afisare();
	cout<<"\---A doua afisare------";	
	sortareVenit(v,3);	
	for(int i=0;i<3;i++)
		v[i]->afisare();
	cout<<"\n---------A trei afisare--------";
	for(int i=0;i<3;i++)
	{
		if(v[i]->testValoare(1))
				v[i]->afisare();
	}
		
	return 0;	
}
