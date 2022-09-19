#include <iostream>
#include "Piesa_A.h"
#include "Piesa_B.h"
#include "Ansamblu.h"
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Ordine(Object *v[], int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(v[i]->getPret()>v[j]->getPret())
				{
					Object *aux;
					aux=v[i];
					v[i]=v[j];
					v[j]=aux;
				}
}

int main(int argc, char** argv) {
	Piesa p1,p2("1922",1);
	 
	Piesa_A pa1,pa2("1223",10,2);
	
	
	Piesa_B pb1,pb2("1111",2,"roz"),*pb;
	pb=new Piesa_B[2];
	pb[0]=pb2;
	pb[1]=pb1;
	string *s=new string[2];
	s[0]="este rupta";
	s[1]="nu o cumpara";
	
	ofstream out("afisare.out" );
	Ansamblu a1;
	//a1.afisare(out);
	Ansamblu a(pa2,pb,2,s);
//	a.afisare(out);
	
	Object **v=new Object*[3];
	v[0]=new Piesa_A("0000",1,2);
	v[1]=new Piesa_B("0100",0,"alb");
	v[2]=new Ansamblu(a);
	cout<<"\n-------INAINTE----------\n";
	
	for(int i=0;i<3;i++)
	{
		v[i]->afisare(out);
	}
	
	Ordine(v,3);
	cout<<"\n--------DUPA---------\n";
		for(int i=0;i<3;i++)
	{
		v[i]->afisare(out);
	} 
	
	return 0;
}
