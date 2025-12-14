//Ehtesham-BS-IT-21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, s, t, A;
    cout<<"Enter the three sides of triange: \n";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    t= s*(s-a)*(s-b)*(s-c);
    A=sqrt(t);
    cout<<"\nArea of Triangle is: "<<A;
    
    return 0;
}