//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;

int main() {
    float temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp > 35)
        cout << "Hot day";
    else if (temp >= 25 && temp <= 35)
        cout << "Pleasant day";
    else
        cout << "Cool day";

    return 0;
}

