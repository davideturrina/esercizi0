using namespace std;
#include <iostream>  
int main ()
{
    int a;
    a=47;

while (a<122 )
{ 
  a++;
  if (a==91 || a==92 || a==93 || a==94 || a==95 || a==96 || a==58 || a==59 || a==60 || a==61 || a==62 || a==63 || a==64)
  {
    continue;
  }
  
  cout <<"CHAR: "<< (char) a<< "   ASCII: " <<a<<endl;
    
}
return 0;
    
}