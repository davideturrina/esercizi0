//Scrivere un programma che prende due numeri interi e determina se il primo è un multiplo del secondo//

using namespace std;
#include <iostream> 
int main ()
{
    int a,b;
    a=0;
    b=0;

    cout<< "inserisci primo numero";
    cin>> a;
    cout<< "inserisci secondo numero";
    cin>> b;

if (a==0)
{
    cout<< "0 non e' multiplo di niente se non di se stesso";
    return 0;
}

else if (a%b==0)
   {
    cout<< a << " e' multiplo di "<< b ;
   } 

else
{
    cout<< a << " non e' multiplo di "<< b ;
}


    

return 0;
}
