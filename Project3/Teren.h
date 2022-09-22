#include "Proprietate.h"
class Teren : public Proprietate{
    double venit_pe_luna_m2; //venitul generat de imobil prin inchiriere pe luna a unui metru patrat
    double suprafata; //in metrii patrati
public:
	Teren();
	Teren(char[],double,double,double);
	void afisare();    
	 double getVenit()const;
};// venitul generat de un teren pe luna este venit_pe_luna_m2*suprafata

