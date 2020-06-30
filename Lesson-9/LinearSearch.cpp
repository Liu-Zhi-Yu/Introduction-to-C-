#include <iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    bool isFound = false;
    int number;
    cout << "What is the element you want to search for in the array?" << endl;
    cin >> number;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i] == number) {
            cout << "We found the element!" << endl;
            isFound = true;
            break;
        }
    }
    if (!isFound) {
        cout << "We did not find the element!" << endl;
    }
}
