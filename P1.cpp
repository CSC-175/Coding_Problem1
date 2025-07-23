#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,s,area;
    // Place your solution code for Coding Problem 1 here
    cout << "Enter the length of side A: ";
    cin >> a;
    cout << "Enter the length of side B: ";
    cin >> b;
    cout << "Enter the length of side C: ";
    cin >> c;

    s = (a + b + c)/2.0;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\nThe area of the triangle is " << area << endl;

    return 0;
}
