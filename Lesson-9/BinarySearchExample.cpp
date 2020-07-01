#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[11] = {2, 3, 1, 6, 4, 1, 6, 8, 3, 2, 0};
    int asize = sizeof(a)/sizeof(a[0]);
    
    int number;
    cout << "What number do you want to search for?" << endl;
    cin >> number;
    
    sort (a, a+asize);
    if (binary_search(a, a+asize, number)) {
        cout << "Your number is found!" << endl;
    }
    else {
        cout << "Your number was not found!" << endl;
    }
}
