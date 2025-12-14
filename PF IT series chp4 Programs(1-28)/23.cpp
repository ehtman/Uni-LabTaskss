//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
float s1, da, hr, gs;
cout<<"Enter basic salary.";
cin>>s1;
da=0.35*s1;
hr=0.25*s1;
gs=s1+da+hr;
cout<<"\nGross Salary is: "<<gs;    
    return 0;
}