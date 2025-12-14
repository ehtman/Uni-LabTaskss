//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int a, fact;
cout<<"Enter a number";
cin>>a;
fact=1;
while(a!=0)
{
fact=fact*a;
a--;
}   
cout<<"Factorial is: "<<fact;    
    return 0;
}