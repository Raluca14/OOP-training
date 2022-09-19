#include "Garantie.h"
#include <iostream>
#include <string.h>
using namespace std;
void Garantie::setString(char*t){
	
    if (t!=NULL) {
        service = new char[strlen(t)+1];
        strcpy(service,t); 
    }else{
        service=NULL;
        
    }

}

void Garantie::eliberez(){
    if (service!=NULL) delete [] service;
}

Garantie::Garantie()
{
	nr_luni=0;
	service=NULL;
}

Garantie::Garantie(int n, char*t):nr_luni(n)
{
	this->setString(t);
	
}


Garantie::Garantie(const Garantie &obj)
{
	this->setString(obj.service);
	nr_luni=obj.nr_luni;
}

Garantie &Garantie::operator=(const Garantie &obj)
{
	this->eliberez();
	this->setString(obj.service);
	this->nr_luni=obj.nr_luni;
	return *this;
}
Garantie::~Garantie(){
	if(service!=NULL) delete []service;
}

std::ostream& operator<<(std::ostream &dev, const Garantie &obj)
{
	dev<<"Garantie: "<<endl;
	dev<<"Luni: "<<obj.nr_luni<<endl;
	if(obj.service!=NULL)
		dev<<"Service: "<<obj.service;
	dev<<endl;
	return dev;	
}
std::istream& operator>>(std::istream &dev,  Garantie &obj)
{
	cout<<"Garantie: "<<endl;
	cout<<"Luni: "<<endl;
	dev>>obj.nr_luni;
	cout<<"Service: "<<endl;
	char t[40];
	dev>>t;
	obj.setString(t);
	return dev;
}
bool target(const Garantie &g) 
{
	if(g.nr_luni>12) return true;
    return	false;
}
char* Garantie::getService()
{
	return this->service;	
}
