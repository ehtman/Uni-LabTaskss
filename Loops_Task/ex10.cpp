//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int a, evsum=0, oddsum=0;
cout<<"Enter a number";
cin>>a;
while(a>=0)
{
if(a%2==0)
    evsum=evsum+a;
else
    oddsum=oddsum+a; 
a--;   
}    
cout<<"Sum of even digits is:"<<evsum<<endl;  
cout<<"Sum of odd digits is:"<<oddsum<<endl;      
    return 0;
}