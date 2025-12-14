//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int a, b, c;
cout<<"Enter three numbers :";
cin>>a>>b>>c;
if(a!=0)    
  {if(b%a==0&&c%a==0)
  cout<<"yes it is common divisor";
  else
  cout<<"No it is not common dividor";}
else 
    cout<<"Error-First number is zero";
    return 0;
}