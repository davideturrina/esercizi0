using namespace std;
#include <iostream>

int main()
{
    int a, b,c, prodotto;
    cout<< "inserisci primo n";
    cin >> a;
    cout<< "inserisci secondo n";
    cin >> b;
    cout<< "inserisci terzo n";
    cin >> c;
    prodotto = 0;
    prodotto = a*b*c;
    cout << "il prodotto e' " << prodotto;
    return 0;
}