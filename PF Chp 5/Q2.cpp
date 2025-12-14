//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter first word of your current status :";
    cin>>ch;
    if(ch=='s'|| ch=='S')
    cout<<"Your salary is Rs. 400/week";
    else if(ch=='j'|| ch=='J')
    cout<<"Your salary is Rs. 275/week";
    else cout<<"Error";
    
    return 0;
}