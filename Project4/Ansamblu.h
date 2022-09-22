#include "Object.h"
#include "Piesa_A.h"
#include "Piesa_B.h"
class Ansamblu:public Object{
Piesa_A pa;
Piesa_B *vec; // are ca nr. de elemente nr. de getgetgetGauri()()() ale lui pa
int nr_caracteristici;
string *caracteristici; //lungimea vectorului e nr_caracteristici
public:
	Ansamblu();
	Ansamblu(const Piesa_A&, const Piesa_B *,int, string * );
	Ansamblu &operator=(const Ansamblu&);
	Ansamblu (Ansamblu const&);
	int getPret();
	void afisare(ofstream&);
	~Ansamblu(){
		if(vec!=NULL) delete []vec;
		if(caracteristici!=NULL) delete []caracteristici;
	}
}; // pretul este dat de suma preturilor pieselor componente

