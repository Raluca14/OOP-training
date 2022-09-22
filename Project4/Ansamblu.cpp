#include <iostream>
#include <string>
#include "Ansamblu.h"
#include <fstream>
using namespace std;
Ansamblu::Ansamblu():nr_caracteristici(0){
		vec=NULL;
		caracteristici=NULL;
}
Ansamblu::Ansamblu(const Piesa_A &p, const Piesa_B *v,int nc, string *c ):nr_caracteristici(nc),pa(p)
{
	
	if(pa.getGauri()>0) {
		vec= new Piesa_B[pa.getGauri()];
		for(int i=0;i<pa.getGauri();i++)
			vec[i]=v[i];
	}
	else vec=NULL;
	if(nc>0)
	{
		caracteristici= new string[nc];
		for(int i=0;i<nc;i++)
			caracteristici[i]=c[i];
	}
	else caracteristici=NULL;
	
}
Ansamblu::Ansamblu (Ansamblu const &a ){
	this->pa=a.pa;
	this->nr_caracteristici=a.nr_caracteristici;
	if(a.vec!=NULL){
		vec=new Piesa_B[this->pa.getGauri()];
		for(int i=0;i<this->pa.getGauri();i++)
		{
			this->vec[i]=a.vec[i];
		}
	}
	else this->vec=NULL;
	if(a.caracteristici!=NULL){
		this->caracteristici=new string[this->nr_caracteristici];
		for(int i=0;i<this->nr_caracteristici;i++)
			this->caracteristici[i]=a.caracteristici[i];
	}
	else this->caracteristici=NULL;
}

Ansamblu &Ansamblu::operator=(const Ansamblu &a){
	this->pa=a.pa;
	this->nr_caracteristici=a.nr_caracteristici;
	if(this->vec!=NULL) delete []vec;
	if(this->caracteristici!=NULL) delete []caracteristici;
	if(a.vec!=NULL){
		vec=new Piesa_B[this->pa.getGauri()];
		for(int i=0;i<this->pa.getGauri();i++)
		{
			this->vec[i]=a.vec[i];
		}
	}
	else this->vec=NULL;
	if(a.caracteristici!=NULL){
		this->caracteristici=new string[this->nr_caracteristici];
		for(int i=0;i<this->nr_caracteristici;i++)
			this->caracteristici[i]=a.caracteristici[i];
	}
	else this->caracteristici=NULL;
	
}
int Ansamblu::getPret(){
	int sum=0;
	for(int i=0;i<pa.getGauri();i++)
	{
		sum=sum+vec[i].getPret();
	}
	return sum+pa.getPret();
}

void Ansamblu::afisare(ofstream &out){
	
	out<<endl<<endl;
	
	pa.afisare(out);
	
	if(vec==NULL) out<<"\nNu avem obiecte de tip B";
	else{
	for(int i=0;i<pa.getGauri();i++)
	{
			out<<endl;
			vec[i].afisare(out);
			
	}
	
	}
	
	out<<"\nNr caracteristici: "<<nr_caracteristici;
	if(caracteristici==NULL) out<<"\nNu avem caracteristici";
	else{
		out<<endl;
	for(int i=0;i<nr_caracteristici;i++)
		out<<caracteristici[i]<<" ";
	}
	out.close();
} 


