//Ehtesham-BS-IT-21
#include<iostream>
using namespace std;
int main(){
float value, result;
char choice;
cout<<"Enter value: ";
cin>>value;
cout<<"Enter conversion type:\ni-Inch to Centimeters\ng-Gallon to Liters\nm-Mile to Kilometers\np-Pound to Kilograms\n";
cin>>choice;
switch(choice){
case 'i': result = value * 2.54; cout<<result<<" Centimeters"; break;
case 'g': result = value * 3.785; cout<<result<<" Liters"; break;
case 'm': result = value * 1.609; cout<<result<<" Kilometers"; break;
case 'p': result = value * 0.4536; cout<<result<<" Kilograms"; break;
default: cout<<"Invalid choice";
}
return 0;
}
