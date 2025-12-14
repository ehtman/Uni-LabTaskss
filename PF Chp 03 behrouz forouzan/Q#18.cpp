//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
    float inch, foot, yard, centi, meter;
    cout<<"Enter measurement in inches: ";
    cin>>inch;
    cout<<"You entered: "<<inch<<"inches";
    foot=inch/12;
    yard=inch/36;
    centi=inch*2.54;
    meter=inch/39.37;
    cout<<endl<<"Your measurement in foot: "<<foot<<endl<<"In yard: "<<yard<<endl<<"In centimeter: "<<centi<<endl<<"In meter: "<<meter;

    return 0;
}