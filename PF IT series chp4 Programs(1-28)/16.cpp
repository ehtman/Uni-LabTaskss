//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, temp;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    temp=a;
    a=c;
    c=b;
    b=temp;
    cout<<"\nNumbers after swapping\n"<<a<<endl<<b<<endl<<c;
    
    return 0;
}