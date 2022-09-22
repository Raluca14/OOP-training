#include "Electrocasnic.h"
#include <string.h>
void Electrocasnic::setMarca(char*t){
	
    if (t!=NULL) {
        marca = new char[strlen(t)+1];
        strcpy(marca,t); 
    }else{
        marca=NULL;
        
    }

}

void Electrocasnic::eliberez(){
    if (marca!=NULL) delete [] marca;
}

Electrocasnic::Electrocasnic()
{
	marca=NULL;
}
Electrocasnic::Electrocasnic(char c[6], int p,char *m):Produs(c,p)
{
	setMarca(m);
}

Electrocasnic::Electrocasnic(const Electrocasnic &e ):Produs(e)
{
	this->setMarca(e.marca);
}

Electrocasnic &Electrocasnic::operator=(const Electrocasnic &e)
{
	Produs::operator=(e);
	this->eliberez();
	this->setMarca(e.marca);
	return *this;
}

void Electrocasnic::afisare()
{	
	Produs::afisare();
	cout<<"\nMarca: "<<marca;	
 }  
