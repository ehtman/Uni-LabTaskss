//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character.";
    cin>>ch;
    if(ch>='a'&& ch<='z')
    cout<<"\nEntered character is a lowercase leter";
    else
    cout<<"\nEntered character is not a lowercase leter";
    
    return 0;
}