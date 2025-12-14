//Ehtesham-BS-IT-21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float p, rate, time, A, Comp;
cout<<"Enter principal amount";
cin>>p;
cout<<"\nEnter rate of interest(%)";
cin>>rate;
cout<<"\nEnter time(years)";
cin>>time;
A=p*pow(1+rate/100, time);
Comp=A-p;
cout<<"\nCompound interest is: "<<Comp;   
    return 0;
}