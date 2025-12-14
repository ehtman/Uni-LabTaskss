//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int s1, s2, s3, s4, s5, total;
float per;
cout<<"Each Subject has total 100 marks";
cout<<"\nEnter Obtained marks of each five subjects.\n";
cin>>s1>>s2>>s3>>s4>>s5;
total=s1+s2+s3+s4+s5;
per=(total*100)/500;
cout<<"\nYour Total obtained marks = "<<total<<"/500";
cout<<"\nYour percentage is: "<<per;    
return 0;
}