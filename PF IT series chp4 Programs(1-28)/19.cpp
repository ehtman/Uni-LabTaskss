//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    float radius, theta, area;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"\nEnter angle in radians: ";
    cin>>theta;
    area = 0.5 * radius * radius * theta;
    cout<<"\nThe area of the sector is: " <<area; 
    return 0;
}