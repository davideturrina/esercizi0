

using namespace std;
#include <iostream>  

int main()//0.6 //
//Scrivere un programma che si fa inserire la lunghezza del raggio e calcola il diametro,//
//circonferenza e area.//
// Ci sono diversi modi nell'ottenere la costante π, tra cui scriversela a mano. //
//Fare i calcoli direttamente//
//nei comandi di cout.//
{
    float raggio,diametro,circonferenza,area;
    const float y=3.141;        
            cout<< "fornisci lunghezza raggio ";
            cin>> raggio;
        diametro =2*raggio;
        circonferenza=y*2*raggio;
        area=y*raggio*raggio;
            cout<< "il diametro e' " << diametro<<endl;
            cout<< "la circonferenza e' "<< circonferenza<<endl;
            cout<< "l' area e' "<< area<<endl;
    return 0;
    }


