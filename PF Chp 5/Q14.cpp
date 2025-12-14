//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main() {
    float salary, tax = 0;
    cout << "Enter salary: ";
    cin >> salary;
    if (salary > 30000)
        tax = 0.2 * salary;
    else if (salary>=20000 && salary<=30000)
        tax = 0.15 * salary;
    else
        tax = 0.1 * salary;
    float netSalary = salary - tax;
    cout << "Salary is: Rs. " << salary << endl;
    cout << "Income Tax: Rs. " << tax << endl;
    cout << "Net Salary: Rs. " << netSalary;
    return 0;
}
