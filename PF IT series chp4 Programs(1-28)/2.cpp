//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
   float r, A, V;
    cout<<"Enter Radius of Sphere"; 
    cin>>r;
    A=4*3.1416*r*r;
    V=(4.0/3.0)*3.1416*r*r*r;
    cout<<"\nSurface Area of Sphere is: "<<A;
    cout<<"\nVolume of Sphere is: "<<V;
    return 0;
}