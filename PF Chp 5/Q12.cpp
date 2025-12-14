//Ehtesham-BS-IT-21
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int hour, minute;
    cout << "Enter time in 24-hour format (HH MM): ";
    cin >> hour >> minute;
    string period = "AM";
    if (hour == 0) {
        hour = 12;
        period = "AM";}
 else if (hour == 12) {
        period = "PM";}
 else if (hour > 12) {
        hour -= 12;
        period = "PM";}
    cout << "Standard time: " << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << " " << period;
    return 0;
}
