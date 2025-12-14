//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int h1, h2, m1, m2, s1, s2, H, M, S;
cout<<"Enter first time in hh:mm:ss format.\n";
cin>>h1>>m1>>s1;
cout<<"Enter second time in hh:mm:ss format.\n";    
cin>>h2>>m2>>s2;

S=s1+s2;
M=m1+m2+S/60;

H=h1+h2+M/60;
M=M%60;
S=S%60;
cout<<"\nTotal time in hh:mm:ss format is: "<<H<<":"<<M<<":"<<S;    
return 0;
}