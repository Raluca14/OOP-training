#include "Proprietate.h"

class Imobil : public Proprietate{
    double venit_pe_an; //venitul generat de imobil prin inchiriere pe an
    char *imbunatatiri; // lista cu imbunatatiri, ex:  centrala, parc in apropiere, etc
public:
	Imobil();
	Imobil(char[],double,double,char*);	
	Imobil(const Imobil &);
	Imobil &operator=(const Imobil &);
	void afisare();
	~Imobil();
	void setImbunatatiri(char*);
	void eliberez();
	double getVenit()const;
 }; // venitul generat de un imobil pe luna este venit_pe_an/12

