#include "Produs.h"
class Electrocasnic : public Produs{
protected:
    char *marca;
public:
	Electrocasnic();
	Electrocasnic(char[],int,char*);
	Electrocasnic(const Electrocasnic & );
	void afisare(); 
	void setMarca(char*);
	void eliberez();   
	Electrocasnic &operator=(const Electrocasnic&);
};

