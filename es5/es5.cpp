
using namespace std;
#include <iostream>                 // Scrivere un programma che legge tre numeri e calcola la asda, //
                                     //la media, il prodotto, il più grande e il più piccolo. //


   int main () 
{    
    int a, b,c, prodotto, somma,asda;
   
         cout<< "inserisci primo n ";
      cin >> a;
         cout<< "inserisci secondo n ";
     cin >> b;
     cout<< "inserisci terzo n ";
     cin >> c;
    asda= 0;
    somma= 0;
    prodotto = 0;
    prodotto = a*b*c;
    somma= a+b+c;
    asda = (a+b+c)/3;
    
    
    


   cout << "il prodotto e' " << prodotto<< endl;
    cout << "la media e' " << asda<< endl;
    cout << "la somma e' " << somma<< endl;
    
   if (a>b && b>=c)
   
   {
      cout <<a << " e' il piu' grande" << endl;   
      cout <<c << " e' il piu' piccolo" << endl;
   }
   else if (a>c && c>=b )
   {
      cout <<a << " e' il piu' grande" << endl;
      cout <<b << " e' il piu' piccolo" << endl;
   }
   else if (b>a && a>=c )
   {
      cout <<b << " e' il piu' grande" << endl;
      cout <<c << " e' il piu' piccolo" << endl;
   }
   else if (b>a && a>=c )
   {
      cout <<b << " e' il piu' grande" << endl;
      cout <<c << " e' il piu' piccolo" << endl;
   }
   else if (c>b && b>=a )
   {
      cout <<c << " e' il piu' grande" << endl;
      cout <<a << " e' il piu' piccolo" << endl;
   }
   else if (c>a && a>=b )
   {
      cout <<c << " e' il piu' grande" << endl;
      cout <<b << " e' il piu' piccolo" << endl;
   }
   
           return 0;
}


