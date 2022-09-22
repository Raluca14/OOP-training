#include <iostream>

#include "Produs.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*Garantie a(3,"Service2");
	
	Produs p,p2(12,"marca1",a);
	cin>>p;
	cout<<p;
	cout<<p2;
	cout<<"\n\nDupa =\n";
	p2=p;
	cout<<p2; */
	
	int n;
	Produs *p;
	cout<<"Nr elemente din vector: ";
	cin>>n;
	p=new Produs[n];
	for(int i=0;i<n;i++)
		cin>>p[i];
	
	sortPret(p,n);
		
	cout<<"\n\nProdusele:\n\n"	;
	for(int i=0;i<n;i++)
		{
			cout<<p[i];
			cout<<endl;
		}	
	cout<<"\n\nPentru garantie>12:\n\n";
	targetGarantie(p,n);
	cout<<"\n\nPentru Service:\n\n";
	SameService(p,n);
	return 0;
}
