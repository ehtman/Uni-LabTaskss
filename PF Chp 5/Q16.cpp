//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main() {
    int type, days, rate;
    cout << "Select vehicle type:\n";
    cout << "1. Motorcycle\n2. Car\n3. Heavy vehicle\n";
    cout << "Enter your choice (1-3): ";
    cin >> type;
    cout << "Enter number of days to park: ";
    cin >> days;
    switch (type) {
        case 1:
            rate = 10;
            break;
        case 2:
            rate = 20;
            break;
        case 3:
            rate = 50;
            break;
        default:
            cout << "Invalid vehicle type";
            return 1;
    }
    cout << "Total parking charges: Rs. " << rate * days;
    return 0;
}