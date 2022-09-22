#include "Piesa.h"
#include <string>
#include <fstream>
#pragma once
using namespace std;
class Piesa_B: public Piesa{
string culoare;
public:
	Piesa_B():culoare("incolor"){
	}
	Piesa_B(char c[],int p, string cul):Piesa(c,p),culoare(cul){
	}
	void afisare(ofstream &out)
	{
		
	
		Piesa::afisare(out);
		out<<endl<<"Culoare: "<<culoare;
	
			}

	
};

