#include "Electrocasnic.h"

class TV: public Electrocasnic{
     double diagonal;
     char *info_suplimentare;
     public:
     	TV();
     	TV(char[],int,char*,double,char*);
     	TV(const TV & );
     	TV &operator=(const TV&);
     	void afisare();
     	void setInfo(char*);
     	void eliberez();
     	friend bool verificare_afisare(const TV&,int,char*,char*);
     	friend std::istream &operator>>(std::istream &, TV&);
     	friend void sortare_diagonala(TV[], int);
     	 
};

