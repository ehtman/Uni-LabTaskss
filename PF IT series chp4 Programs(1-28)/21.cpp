//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main()
{
char letter;
cout << "Enter a lowercase letter: ";
cin >> letter;
char next1 = 'a' + (letter - 'a' + 1) % 26;
char next2 = 'a' + (letter - 'a' + 2) % 26;
cout<<"Next two letters after "<<letter<<" are: "<<next1<<" and "<<next2;        
    return 0;
}