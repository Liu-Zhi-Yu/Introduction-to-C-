#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double double1, double2;
    cout << "Please enter two doubles." << endl;
    cin >> double1 >> double2;
    
    double1 = sqrt(double1);
    double2 = pow(double2, 2);
    
    double sum = double1 + double2;
    cout << (int) sum << endl;
}
