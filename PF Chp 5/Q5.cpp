//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
float n, cel, far;
char ch;
cout<<"Enter a number and letter";
cin>>n>>ch;
   if(ch=='f') {   
far=n;
cel=(far-32)*5.0/9.0;
cout<<"temp in celsius is :"<<cel;}
   else if(ch=='c') {   
cel=n;
far=(9.0/5.0 *cel)+32;
cout<<"temp in fahrenheit is :"<<far;}
    else cout<<"invalid input";
    return 0;
}