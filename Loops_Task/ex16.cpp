//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
int a,b,n,next,count;
a=0;
b=1;
count=2;
cout<<"Enter number of Fibonacci terms: ";
cin>>n;
cout<<"Fibonacci Terms are: "<<endl;
cout<<a<<"\t"<<b;
while(count<n)
{
next=a+b;
cout<<"\t"<<next;
count++;
a=b;
b=next;
}
    return 0;
}