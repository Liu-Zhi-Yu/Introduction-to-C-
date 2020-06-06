#include <iostream>
using namespace std;

int main(){
    //Reading in input from the user
    int arr[6][7];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 7; j++){
            cout << "Please enter a number to put into row " << i << " column " << j << "." << endl;
            cin >> arr[i][j];
        }
    }
    
    //Asking for the option
    int option = 0;
    while (option < 1 || option > 5){
        cout << "Please enter which option you want: 1-5." << endl;
        cin >> option;
    }
    
    //Option 1
    if (option == 1){
        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 7; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    //Option 2
    if (option == 2){
        int sum = 0;
        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 7; j++){
                sum += arr[i][j];
            }
        }
        cout << "The sum is: " << sum << endl;
    }
    
    //Option 3
    if (option == 3){
        int sum = 0;
        
        int row;
        cout << "Please enter a row for which you want the sum of the row-wise elements." << endl;
        cin >> row;
        
        for (int i = 0; i < 7; i++){
            sum += arr[row][i];
        }
        
        cout << "The sum is: " << sum << endl;
    }
    
    //Option 4
    if (option == 4){
        int sum = 0;
        
        int col;
        cout << "Please enter a column for which you want the sum of the column-wise elements." << endl;
        cin >> col;
        
        for (int i = 0; i < 6; i++){
            sum += arr[i][col];
        }
        
        cout << "The sum is: " << sum << endl;
    }
    
    //Option 5
    if (option == 5){
        int newarr[7][6];
        int rowOld = 0;
        int colOld = 0;
        for (int i = 0; i < 7; i++){
            for (int j = 0; j < 6; j++){
                newarr[i][j] = arr[rowOld][colOld];
                colOld++;
                if (colOld == 7){
                    rowOld++;
                    colOld = 0;
                }
            }
        }
    }
}
