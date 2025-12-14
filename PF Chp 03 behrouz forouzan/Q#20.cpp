//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 5-digit integer: ";
    cin >> number;

    int d1 = number / 10000;
    int d2 = (number / 1000) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 10) % 10;
    int d5 = number % 10;

    cout <<d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;
    cout <<d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;
    cout <<d3 << "   " << d4 << "   " << d5 << endl;
    cout <<d4 << "   " << d5 << endl;
    cout <<d5 << endl;

    return 0;
}