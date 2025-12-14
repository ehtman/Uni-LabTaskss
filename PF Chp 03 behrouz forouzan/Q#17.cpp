//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;

int main() {
    float cel, far;

    cout<<"Enter temperature in Centigrade: ";
    cin>>cel;
    far=(cel * 1.8) + 32;
    cout<<endl<<"Equivalent temperature in Fahrenheit: "<<far<<endl;

    return 0;
}
