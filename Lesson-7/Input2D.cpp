#include <iostream>
using namespace std;

int main(){
    int arr[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "Please enter a number to put in row " << i << " column " << j << endl;
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
