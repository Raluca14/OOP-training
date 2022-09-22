#include "Piesa.h"
#pragma once
#include <fstream>
using namespace std;
class Piesa_A: public Piesa{ 
int gauri;
public:
	Piesa_A():gauri(0){
	}
	Piesa_A(char c[],int p, int g):Piesa(c,p),gauri(g){
	}
	void afisare(ofstream &out){
		
		Piesa::afisare(out);
		out<<"\nGauri: "<<gauri;
		
	}
	int getGauri(){
		return gauri;
	}

};

