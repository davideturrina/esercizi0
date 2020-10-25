#include <iostream>
using namespace std;

int main() 
{
    int x;
    int y;
    y=0;
    x=0;

    cout<< "inserisci primo numero";
    cin>> x;
    cout<< "inserisci secondo numero"<<endl;
    cin>> y;
    
    if (x==y)
    {
        cout<< "the two numbers are equal"<<endl;
        return 0;
    }
    else if(x<y)
    {
        cout<< y << " is larger.";
        return 0;
    }
        else
        {
            cout<< x << " is larger.";
            return 0;
        }
    }
