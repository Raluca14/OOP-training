#include "Imobil.h"
#include <string.h>
void Imobil::setImbunatatiri(char*t){
	
    if (t!=NULL) {
        imbunatatiri = new char[strlen(t)+1];
        strcpy(imbunatatiri,t); 
    }else{
        imbunatatiri=NULL;
        
    }

}

void Imobil::eliberez(){
    if (imbunatatiri!=NULL) delete [] imbunatatiri;
}

Imobil::Imobil():venit_pe_an(0)
{
	imbunatatiri=NULL;
	
}

Imobil::Imobil(char c[],double v,double venit_a,char *imb):Proprietate(c,v),venit_pe_an(venit_a)
{
	setImbunatatiri(imb);
}
Imobil::Imobil(const Imobil &i):Proprietate(i),venit_pe_an(i.venit_pe_an)
{
	this->setImbunatatiri(i.imbunatatiri);
}

Imobil &Imobil::operator=(const Imobil &i){
	Proprietate::operator=(i);
	this->eliberez();
	venit_pe_an=i.venit_pe_an;
	this->setImbunatatiri(i.imbunatatiri);
	return *this;
}

void Imobil::afisare()
{
	Proprietate::afisare();
	cout<<"\n\nImobil: "<<"\nVenit pe an: "<<venit_pe_an;
	cout<<"\nImbunatatiri: "<<imbunatatiri;
}

Imobil::~Imobil()
{
	 eliberez();
}
double Imobil::getVenit()const{
	return venit_pe_an/12;
}
