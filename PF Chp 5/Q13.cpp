//Ehtesham-BS-IT-21
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots of the equation are " << root1 << " and " << root2;
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        cout << "Both roots are equal: " << root1;}
     else {
        cout << "Sorry, the roots are not real.";}
        return 0;
}
