//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int a, x, y, sum;
cout<<"Enter a number: ";
cin>>a;
x=a;
sum=0;
while(a!=0)
{
    y=a%10;
    sum=sum+y;
    a=a/10;
}    
cout<<"Sum of digits of  "<<x<<" is "<<sum;
    
    return 0;
}