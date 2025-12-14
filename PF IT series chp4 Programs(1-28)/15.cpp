//Ehtesham-BS-IT-21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1, x2, y1, y2, d1, D;
    cout<<"Enter coordinates of x. (x1 and x2)\n";
    cin>>x1>>x2;
    cout<<"\nEnter coordinates of y. (y1 and y2)\n";
    cin>>y1>>y2;
    d1=(x2-x1)*(x2-x1)-(y2-y1)*(y2-y1);
    D=sqrt(d1);
    cout<<"\nDistance is : "<<D;
    return 0;
}