#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num1, num2, num3, num4;
    cout << "Please input four doubles." << endl;
    
    cin >> num1 >> num2 >> num3 >> num4;
    
    double arr[4] = {num1, num2, num3, num4};
    double sum = arr[0] + arr[1] + arr[2] + arr[3];
    double sumcubes = pow (arr[0], 3) + pow (arr[1], 3) + pow (arr[2], 3) + pow (arr[3], 3);
    
    cout << "The sum is " << sum << endl;
    cout << "The cubed sum is " << sumcubes << endl;
    if (sum > sumcubes) {
        cout << "Greater than cubes!" << endl;
    }
    else {
        cout << "Less than cubes!" << endl;
    }
}
