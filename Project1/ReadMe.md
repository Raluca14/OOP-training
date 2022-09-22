Fie tipul de date Produs descris mai jos:
class Produs{
   int pret; //ex: 45
   char* marca; //”LG”
   Garantie g;   
};
Dupa cum observati clasa Produs contine un atribut de tip Garantie (agregare intre cele 2 clase).
class Garantie{
  int nr_luni;  //durata garantie
  char* service; //cine asigura service-ul
};
Cerinte:

1.	Creati 2-3 obiecte de tip produs cu atribute alese de voi si afisati-le. Testati atribuirea (operator=) pentru tipul Produs.
2.	Creati un vector in care stocati obiecte de tip Produs (dimensiunea citita de la tastatura).
3.	Cititi date despre produse si stocati-le in obiectele din vector.
4.	Sortati vectorul in functie de pretul produselor (implementati ca functie). Afisati-l.
5.	Afisati toate produsele care au garantie >12 luni (implementati ca functie).
6.	Afisati toate produsele care au garantie la service-ul “SerVice” (implementati ca functie).

OBSERVATIE: Afisarea/citirea implica afisarea/citirea tuturor atributelor. Aceste operatii o sa fie facute cu operatorul<< si operatorul>>. 
