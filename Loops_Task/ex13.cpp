//Ehtesham-BS-IT-21
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
int countch=0;
int countwrd=1;
cout<<"Enter a sentence"<<endl;
char ch='a';
while(ch!='\r')    
{
    ch=getche();
    if(ch==' ')
    countwrd++;
else 
    countch++;
}
   cout<<"Words = "<<countwrd<<endl;
   cout<<"Characters = "<<countch; 
    return 0;
}