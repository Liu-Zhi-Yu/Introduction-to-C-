#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cows, length;
    cin >> cows >> length;
    
    int cow[cows];
    for (int i = 0; i < cows; i++) {
        cin >> cow[i];
    }
    sort(cow, cow+cows);
    int count = 0;
    for (int i = 0; i < cows; i++) {
        if ((cow[i]+cow[0]) <= length) {
            for (int j = i; j < cows; j++) {
                if (((cow[j]+cow[0]) <= length) && (i != j)){
                    if ((cow[i]+cow[j]) <= length) {
                        count++;
                    }
                }
            }
        }
        else {
            break;
        }
    }
    cout << count << endl;
}
