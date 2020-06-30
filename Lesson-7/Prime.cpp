#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n){
    for (int i = 2; i < (int) sqrt(n) + 1; i++){
        if (fmod(n,i) == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Please enter a number:" << endl;
    cin >> n;
    
    cout << prime(n) << endl;
}
