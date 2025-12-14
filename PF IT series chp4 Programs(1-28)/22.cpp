//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int n, a, b, c, d, e, b1, c1, d1, sum;
cout<<"Enter 5 digit number.";
cin>>n;
 a=n/10000;
b1=n/1000;
 b=b1%10;
c1=n/100;
 c=c1%10;
d1=n/10;
 d=d1%10;
 e=n%10;
sum=a+b+c+d+e;
cout<<"\nSum of it's digits is: "<<sum; 
    return 0;
}