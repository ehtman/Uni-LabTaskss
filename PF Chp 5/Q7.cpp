//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
char code;
cout<<"A Adventure\nC Comedy\nF Family\nH Horror\nS Science Fiction\n";
cin>>code;
switch (code) {
case 'A': cout<<"Adventure Movies"; break;
case 'C': cout<<"Comedy Movies"; break;
case 'F': cout<<"Family Movies"; break;
case 'H': cout<<"Horror Movies"; break;
case 'S': cout<<"Science Fiction Movies"; break;
default: cout<<"Invalid Code";
}   
    return 0;
}