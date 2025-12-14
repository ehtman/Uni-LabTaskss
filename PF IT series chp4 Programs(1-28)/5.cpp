//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, sum;
    float avg,prd;
    cout<<"Enter four numbers.\n";
    cin>>a>>b>>c>>d;
    sum=a+b+c+d;
    avg=sum/4;
    prd=a*b*c*d;
    cout<<"\nSum is: "<<sum;
    cout<<"\nProduct is: "<<prd;
    cout<<"\nAverage is: "<<avg;
    return 0;
}