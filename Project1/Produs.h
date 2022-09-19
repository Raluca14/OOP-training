#include "Garantie.h"
class Produs{
   int pret; //ex: 45
   char* marca; //"LG"
   Garantie g;  
   public:
   Produs();
   Produs(int, char*, Garantie );
   Produs(const Produs &);
   Produs & operator=(const Produs &);
   ~Produs();
  	friend ostream& operator<<(ostream &, const Produs &);
  	friend istream& operator>>(istream &, Produs &);
	void setString(char*);
  	void eliberez();
  	friend void sortPret(Produs *,int );
  	friend void targetGarantie(Produs *, int );
  	friend void SameService(Produs *, int);
  	
};

