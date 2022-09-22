#include <iostream>
#include "TV.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*Produs p("193dy",12),p2;
	p.afisare();
//	p2.afisare();
	
	cout<<"\n------------------\n";
	Electrocasnic e("10291",12,"UU"),e2(e),e3;
	e.afisare();
	cout<<endl;
	e2.afisare();
	cout<<"\n";
	e3=e;
	e3.afisare();
	//e2.afisare();
	
	cout<<"\n------------------\n";
	TV t("19gd",12,"HE",21,"NU"),t2(t),t3;
	t.afisare();
	cout<<"\n";
	t2.afisare();
	cout<<"\n";
	t3=t2;
	t3.afisare(); */
	
	TV *vect;
	int n;
	cout<<"Dati numarul de elemente: ";
	cin>>n;
	vect = new TV[n];
	for(int i=0;i<n;i++)
		cin>>vect[i];
	sortare_diagonala(vect,n);
	for(int i=0;i<n;i++)
		vect[i].afisare(); 
	for(int i=0;i<n;i++)
		if(verificare_afisare(vect[i],150,"LG","a1")==true)
			vect[i].afisare();		
	
	
	
	
	
	return 0;
}
