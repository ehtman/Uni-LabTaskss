//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cout<<"Enter a 3 digit number";
    cin>>n;
    a=n/100;
    b=n/10;
    b=b%10;
    c=n%10;
    cout<<endl<<a<<endl<<b<<endl<<c;
    return 0;
}