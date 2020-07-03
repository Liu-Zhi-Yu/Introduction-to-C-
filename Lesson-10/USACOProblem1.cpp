#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
   
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    bool noneLarger;
    for (int i = 0; i < n-1; i++){
        noneLarger = true;
        for (int j = i+1; j < n; j++){
            if (arr[j] > arr[i]){
                noneLarger = false;
                cout << j+1 << endl;
                break;
            }
        }
        
        if (noneLarger)
            cout << 0 << endl;
    }
    
    cout << 0 << endl;
}
