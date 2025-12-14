//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int code;
cout<<"Enter code number";
cin>>code;
switch (code) {
    case 1: cout<<"Western Digital"; break;
    case 2: cout<<"3M Corporation"; break;
    case 3: cout<<"Maxell Corporation"; break;
    case 4: cout<<"Sony Corporation"; break;
    case 5: cout<<"Verbatim Corporation"; break;
    default: cout<<"Invalid";
}   
    return 0;
}