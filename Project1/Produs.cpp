
#include "Produs.h"
#include <iostream>
#include <string.h>
using namespace std;
void Produs::setString(char*t){
	
    if (t!=NULL) {
        marca = new char[strlen(t)+1];
        strcpy(marca,t); 
    }else{
        marca=NULL;
        
    }

}

void Produs::eliberez(){
    if (marca!=NULL) delete [] marca;
}

Produs::Produs()
{
	pret=0;
	marca=NULL;
}
Produs::Produs(int p, char *m, Garantie obj):g(obj)
{
	pret=p;
	this->setString(m);
	
}
Produs::Produs(const Produs &prod)
{
	this->g=prod.g;
	pret=prod.pret;
	this->setString(prod.marca);
	
}

Produs::~Produs()
{
	if(marca!=NULL) delete []marca;
	
}
Produs & Produs::operator=(const Produs &p)
{
	this->pret=p.pret;
	this->eliberez();
	this->setString(p.marca);
	this->g=p.g;
	return *this;
}
ostream& operator<<(ostream &dev, const Produs &p)
{
	dev<<"Produs: "<<endl;
	dev<<"Pret: "<<p.pret<<endl;
	if(p.marca!=NULL)
		dev<<"Marca: "<<p.marca<<endl;
	dev<<p.g;
	return dev;	
		
}
istream& operator>>(istream &dev, Produs &p)
{
	cout<<"Produs: "<<endl;
	cout<<"Pret: "<<endl;
	dev>>p.pret;
	if(p.marca!=NULL) delete []p.marca;
	cout<<"Marca: "<<endl;
	char t[40];
	dev>>t;
	p.setString(t);
	dev>>p.g;
	return dev;
	
}
void sortPret(Produs *p, int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(p[i].pret>p[j].pret){
			
				Produs aux=p[i];
				p[i]=p[j];
				p[j]=aux;
			}
		}
	
	
}
void targetGarantie(Produs *p, int n)
 {
 	for(int i=0;i<n;i++)
 		if(target(p[i].g))cout<<p[i]<<endl;
 }
 
void SameService(Produs *p, int n)
{
	for(int i=0;i<n;i++)
		if(strcmp(p[i].g.getService(),"SerVice")==0) cout<<p[i]<<endl;
 } 
 
