//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
float a, b;
a=1.0;
b=2.0;
while(b<=100)    
{
    a=a+1.0/b;
    b+=2;
}
    cout<<"Sum of series is: "<<a;
    return 0;
}