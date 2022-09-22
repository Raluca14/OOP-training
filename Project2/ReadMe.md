Se da urmatoarea ierarhie de clase. Clasa de baza este Produs:
class Produs{
protected: 
   char cod[6];
   int pret;
};
Din care e derivata clasa Electrocasnic:
class Electrocasnic : public Produs{
protected:
    char *marca;
};
Din clasa Electrocasnic e derivata clasa TV:
class TV: public Electrocasnic{
     double diagonal;
     char *info_suplimentare;
};
Cerinte:
1.	Pentru toate tipurile de date implementati constructori cu parametri.
2.	Implementati constructorul de copiere, operatorul= si destructorul, doar acolo unde este nevoie (cei generati automat nu functioneaza corect).
3.	Implementati functii pentru afisarea atributelor (pentru fiecare tip de date – redefinirea functie de afisare).
Intr-un program de test: 

4.	Creati un vector de obiecte de tip TV, populati-l cu date citite de la tastatura si sortati-l in functie de diagonala.
5.	Afisati doar TV-urile cu pret>150, marca “LG” si codul continand secventa “a1” (implementati orice metode necesare pentru realizarea acestei cerinte).
