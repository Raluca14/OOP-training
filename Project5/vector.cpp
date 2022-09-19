#include <assert.h>
#include <iostream>
#include <string> 
#include "Proprietate.h"
using namespace std;
template <typename T>
class vector
{ int dim;
  T* buf;
  public:
     vector();   
     vector(int , T*);
     vector(const vector&);
     vector & operator=(const vector &);
     ~vector();
	 T& operator[](int i);
     int getDim();
     void addElem(int, T&  );
     void removeElem(int  );
     void sortare();
	 friend ostream & operator << (ostream & dev,  vector & v)
     {
	    dev << "Vector:" <<endl;
	    dev << "Nr Elem:" << v.dim << endl;
	    if (v.buf!=NULL)
	    for(int i = 0; i < v.dim; i++) {
		   dev << v.buf[i];//am nevoie de op<< pt T
		   if(i < v.dim-1)
		    	dev << ",   ";
		   else
		    	dev << "." << endl;
		}
        dev<<endl;
	    return dev;
     }


	//void addElem(int, T&  ); - adauga element T pe pozitia i - cu realocare
	//void removeElem(int  ); - sterge elementul de pe pozitia i cu realocare
	//void sortare(); ordoneaza crescator elementele din buf; in T avem nevoie de op< 
};

template <class T>
    void vector<T>::addElem(int poz, T&e  )
    {
    	vector copie(*this);
    	
    	
    	if(buf==NULL) 
    	{
    		buf=new T[1];
    		buf[0]=e;
		}
		else{
			if(dim<poz)
			{
				delete []buf;
				dim++;
				buf=new T[dim];
				for(int i=0;i<copie.dim;i++)
					buf[i]=copie.buf[i];
				buf[dim-1]=e;	
			}
			else{
				delete []buf;
				dim++;
				buf=new T[dim];
				for(int i=0;i<poz;i++)
				{
					buf[i]=copie.buf[i];
				}
				buf[poz]=e;
				for(int j=poz+1;j<dim;j++)
				{
					buf[j]=copie.buf[j-1];
				}
			}
		}
	}
template <typename T>
void  vector<T>::removeElem(int poz ){
	vector copie(*this);
	if(buf=NULL){
		cout<<"Nu exista nici un element.";
	}
	else{
		if(dim<poz)
		{
			cout<<"Nu exista nici un element pe aceasta pozitie.";
			
		}
		else{
			delete []buf;
			dim--;
			buf=new T[dim];
			for(int i=0;i<poz;i++)
			{
				buf[i]=copie.buf[i];
				
			}
			for(int i=poz+1;i<copie.dim;i++)
			{
				buf[i-1]=copie.buf[i];
			}
		}
	}
}

template <class T>
void vector<T>::sortare(){
	for(int i=0;i<dim-1;i++)
		for(int j=i+1;j<dim;j++)
		{
			if(buf[i]>buf[j])
			{
				T aux;
				aux=buf[i];
				buf[i]=buf[j];
				buf[j]=aux;
			}
		}
}

template <typename T>
vector<T>::vector( ){
	dim=0;
	buf=NULL;
}

template <typename T>
vector<T>::vector(int d, T*b){
       dim=d;
       if (b==NULL) buf = NULL;
	   else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
            buf[i]=b[i]; //op= in T
        }
     }
     
     
template <typename T>
vector<T>::vector(const vector<T>& v){
       dim=v.dim;
       if (v.buf==NULL) buf=NULL;
       else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
             buf[i]=v.buf[i]; //op= in T
        }
	 }
     
     
template <typename T>
vector<T>::~vector(){
        if (buf!=NULL) delete [] buf; //destr in T
}
               
template <typename T>
vector<T>&  vector<T>::operator=(const vector &v){
       dim=v.dim;
       if (buf!=NULL) delete [] buf; //destr in T
       if (v.buf==NULL) buf=NULL;
       else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
             buf[i]=v.buf[i]; //op= in T  
		}
        return *this;            
}

template <typename T>
T& vector<T>::operator[](int i){
      assert ((i>-1 && i<dim));
	  return buf[i];  //constr de copiere in T     
}   

template <typename T>
int vector<T>::getDim(){
   return dim;
}
 
class complex
{ double re,im;
public: complex(double r=0,double i=0):re(r),im(i){
        }
         
        friend ostream& operator<<(ostream &d,complex x){
	 
            d<<x.re<<" j"<<x.im;
            return d;
        }
        
        friend const bool operator<(complex a,complex b)
        {
        	if(a.re<b.re) return true;
        	else return false;
		}
        //ordonarea se va face in fctie de partea reala
};

template <typename X, typename Y>
class pereche
{ 	X elem1;
	Y elem2;
public:
	pereche(){
		 }
	pereche(const X &e1, const Y &e2){
		elem1=e1;
		elem2=e2; }
	friend ostream& operator<<(ostream &d,const pereche &x){
		d<<endl;
		d<<x.elem1<<" : " << x.elem2<<endl;
		return d; }
		
	friend const bool operator>(pereche a, pereche b)
	{
		if(a.elem1>b.elem1)	 return true;
		else return false;	
		}	
		
};


int main(){
	 complex *b=new complex[2];
	 b[0]=complex(1,2);
     b[1]=complex(2,2);
	 vector<complex> v(2,b);
     cout<<v;
     
	 cout<<v[0];
     
	 v[1]=complex(5,5);
     cout<<v;
     
     vector<complex> v1(v);
     cout<<v1;
     
     v=v1;
     cout<<v;
     //specializarea pentru int
     int *a=new int[3];
     a[0]=10;
     a[1]=20;
     a[2]=30;
     vector<int> v2(3,a);
     
     int x=2;
     
     cout<<"\nAsta sunt valorile pentru int:"<<v2[0]<<" "<<v2[1]<<" "<<v2[2];
     v2.addElem(1,x);
      cout<<"\nAsta sunt valorile pentru int 2:"<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<" "<<v2[3];
      
      v2.sortare();
      cout<<"\nAsta sunt valorile pentru int dupa sortare:"<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<" "<<v2[3];
      
     string *c=new string[3];
     c[0]="Raluca";
     c[1]=" are ";
     c[2]=" mere ";
     vector<string> v3(3,c);
     cout<<"\nAsta sunt valorile pentru string:"<<v3[0]<<" "<<v3[1]<<" "<<v3[2];
     v3.removeElem(0);
     cout<<"\nAsta sunt valorile pentru string:"<<v3[0]<<" "<<v3[1];
     
     string *s=new string[4];
     s[0]="Apa ";
     s[1]="este H2O";
     s[2]="Marea ";
     s[3]=" este multa apa";
     
     pereche<string,string> p1(s[0],s[1]);
     pereche<string,string> p2(s[2],s[3]);
     pereche<string,string> *p=new pereche<string,string>[2];
     p[0]=p1;
     p[1]=p2;

	 vector<pereche<string,string> > dictionar(2,p);
	 dictionar.sortare();
	 for(int i=0;i<2;i++)
	 {
	 	cout<<endl<<dictionar[i];
	 }
     
     char c1[6]="00000",c2[6]="11111";
     Proprietate pr1(c1,200),pr2(c2,400);
     pr1.afisare();
     pr2.afisare();
     Proprietate *prop=new Proprietate[2];
     prop[1]=pr1;
     prop[2]=pr2;
     vector<Proprietate>vector_proprietati(2,prop);
     for(int i=0;i<2;i++)
	 {
	 	cout<<endl<<vector_proprietati[i];
	 }
     
          
     return 0;
}


