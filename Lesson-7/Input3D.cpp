#include <iostream>
using namespace std;

int main(){
    int arr[2][3][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 2; k++){
                cout << "Please enter a number to put in row " << i << " column " << j << " depth " << k << endl;
                cin >> arr[i][j][k];
            }
        }
    }
    
    cout << "[" << endl;
    for (int i = 0; i < 2; i++){
        cout << "[";
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 2; k++){
                cout << arr[i][j][k] << " ";
            }
            if (j != 2)
                cout << endl;
        }
        cout << "] ," << endl;
        cout << endl;
    }
    cout << "]" << endl;
}
