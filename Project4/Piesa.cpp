#include "Piesa.h"
#include <iostream>
#include <fstream>
using namespace std;
void Piesa::afisare(ofstream &out)
{
	
	
	out<<"\nCod: ";
	for(int i=0;i<4;i++)
		out<<cod[i];
	out<<"\nPret: "<<pret;
		
	
}
