//Ehtesham-BS-IT-21
#include <iostream>
using namespace std;
int main() {
    float obtainedMarks;
    const float totalMarks = 1100;
    float percentage;
    cout << "Enter obtained marks (out of 1100): ";
    cin >> obtainedMarks;
    percentage = (obtainedMarks / totalMarks) * 100;
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 80)
        cout << "Grade: A+";
    else if (percentage >= 70)
        cout << "Grade: A";
    else if (percentage >= 60)
        cout << "Grade: B";
    else if (percentage >= 50)
        cout << "Grade: C";
    else if (percentage >= 40)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
