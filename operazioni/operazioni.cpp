using namespace std;
#include <iostream>

   int main ()
{    
    int a, b, prodotto, somma, divisione, resto;
   
         cout<< "inserisci primo n";
      cin >> a;
         cout<< "inserisci secondo n";
     cin >> b;
    somma= 0;
    divisione= 0; 
    resto= 0;
    prodotto = 0;
    prodotto = a*b;
    somma = a+b;
    resto = a%b;
    divisione = a/b;
    
    


   cout << "il prodotto e' " << prodotto<< endl;
    cout << "la somma e' " << somma<< endl;
     cout << "  la divisione e' " << divisione;
         cout << "  il resto e' " << resto;
    
     
           return 0;
    }


