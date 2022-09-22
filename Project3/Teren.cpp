#include "Teren.h"

Teren::Teren():venit_pe_luna_m2(0),suprafata(0)
{
}
Teren::Teren(char c[],double v,double venit_l,double supr):Proprietate(c,v),venit_pe_luna_m2(venit_l),suprafata(supr)
{
}
void Teren::afisare(){
	Proprietate::afisare();
	cout<<"\n\nTeren: ";
	cout<<"\nVenit pe luna: "<<venit_pe_luna_m2<<"\nSuprafata: "<<suprafata;
} 
double Teren::getVenit()const{
	return venit_pe_luna_m2*suprafata;
}
