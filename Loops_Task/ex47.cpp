//Ehtesham-BS-IT-21
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int a, b, c, d=5;
for(a=1;a<=5;a++)
{
    for(c=1;c<=d;c++)
    cout<<(" ");
    for(b=1;b<=a;b++)
    cout<<setw(2)<<a;
cout<<endl;
d--;
}    
   return 0;
}