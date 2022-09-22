#include "TV.h"
#include <string.h>
void TV::setInfo(char*t){
	
    if (t!=NULL) {
        info_suplimentare = new char[strlen(t)+1];
        strcpy(info_suplimentare,t); 
    }else{
        info_suplimentare=NULL;
        
    }

}

void TV::eliberez(){
    if (info_suplimentare!=NULL) delete [] info_suplimentare;
}

TV::TV()
{
	info_suplimentare=NULL;
}
TV::TV(char c[6],int p,char *m,double d,char *info):Electrocasnic(c,p,m)
{
	setInfo(info);
	diagonal=d;
}

TV::TV(const TV &t ):Electrocasnic(t)
{
	this->setInfo(t.info_suplimentare);
	this->diagonal=t.diagonal;
}

TV &TV::operator=(const TV &t)
{
	Electrocasnic::operator=(t);
	this->eliberez();
	this->setInfo(t.info_suplimentare);
	this->diagonal=t.diagonal;
	return *this;
}

std::istream &operator>>(std::istream &dev, TV &v)
{
	cout<<"Produs: \nCod:";
	for(int i=0;i<6;i++)
		dev>>v.cod[i];
	cout<<"\nPret: ";
	dev>>v.pret;
	
	char aux[30];
	if(v.marca==NULL) delete []v.marca;
	cout<<"\nMarca: ";
	dev>>aux;
	v.marca=new char[strlen(aux)+1];
	strcpy(v.marca,aux);
	
	cout<<"\nDiagonala: ";
	dev>>v.diagonal;
	
	
	cout<<"\nInfo suplimentara: ";
	dev>>aux;
	v.eliberez();
	v.setInfo(aux);
	
	return dev;
	
}

void sortare_diagonala(TV v[], int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n;j++)
			if(v[i].diagonal>v[j].diagonal)
			{
				TV aux;
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
}

bool verificare_afisare(const TV &obj, int p, char *c_marca, char *c_cod)
{
	if(obj.pret<p)
		return false;
	if(strcmp(obj.marca,c_marca)!=0)
		return false;
	if(strstr(obj.cod,c_cod)==NULL)
		return false;
	return true;			
}
void TV::afisare()
{
	Electrocasnic::afisare();
	cout<<"\nDiagonala: "<<diagonal<<"\nInformatii Suplimentare: "<<info_suplimentare;
}

