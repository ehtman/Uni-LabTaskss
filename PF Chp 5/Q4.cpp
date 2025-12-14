//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
char ch;
float area, side, height, base;
cout<<"Enter first character of figure.";
cin>>ch;
if(ch=='s'||ch=='S')  {
   cout<<"Enter side of square.";
   cin>>side;
   area=side*side;
   cout<<"Area of square is :"<<area;  }
else if(ch=='t'||ch=='T') {
    cout<<"Enter base and height of triangle: "; 
    cin>>base>>height;
    area=0.5*base*height;
    cout<<"Area of triangle is :"<<area;  }   
else 
    cout<<"Invalid input";    
    return 0;
}