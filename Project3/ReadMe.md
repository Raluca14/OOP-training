Se da urmatoarea ierarhie de clase. Clasa de baza este Proprietate:

class Proprietate {
protected: 
   char cod[6];
   double valoare;
};//venitul generat de o proprietate pe luna e 0

Din Proprietate e derivata clasa Imobil:
class Imobil : public Proprietate{
    double venit_pe_an; //venitul generat de imobil prin inchiriere pe an
    char *imbunatatiri; // lista cu imbunatatiri, ex:  centrala, parc in apropiere, etc
 }; // venitul generat de un imobil pe luna este venit_pe_an/12

Tot din clasa Proprietate e derivate si clasa Teren:
class Teren : public Proprietate{
    double venit_pe_luna_m2; //venitul generat de imobil prin inchiriere pe luna a unui metru patrat
    double suprafata; //in metrii patrati
};// venitul generat de un teren pe luna este venit_pe_luna_m2*suprafata

Cerinte:
1.	Pentru toate tipurile de date implementati constructori cu parametri.
2.	Implementati constructorul de copiere, operatorul= si destructorul, doar acolo unde este nevoie .
Intr-un program de test: 
3.	Creati un vector in care sa stocati obiecte de tip Proprietate, Imobil si, respectiv, de tip Teren. 
4.	Sortati vectorul in functie de venitul generat pe luna.
5.	Afisati toate atributele obiectelor stocate.
6.	Afisati toate atributele proprietatilor (inclusiv imobile si terenuri) cu valoare >10000.

