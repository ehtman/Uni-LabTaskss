//Ehtesham BS-IT-21
#include<iostream>
using namespace std;
int main()
{
float area;
float radius;
float circ;
cout <<"Enter Radius: " << endl;
cin >> radius;
cout << endl <<"Radius is: " << radius;
area=radius*radius*3.1416;
circ=2*3.1416*radius;
cout<<"\nCircumference is:  " <<circ;
cout<<"\nArea is:  " <<area;
return 0;
}