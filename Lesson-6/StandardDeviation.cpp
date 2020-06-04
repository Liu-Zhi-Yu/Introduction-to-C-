#include <iostream>
#include <cmath>
using namespace std;

double standardDeviation(int num1, int num2, int num3, int num4, int num5){
    //Initializing an Array 
    int arr[5] = {num1, num2, num3, num4, num5};
    
    //Calculating the mean
    double mean = 0.0;
    for (int i = 0; i < 5; i++){
        mean += arr[i];
    }
    mean /= 5;
    cout << mean << endl;
    
    //Finding the squared distance from the mean
    double value = 0.0;
    for (int i = 0; i < 5; i++){
        value += pow(abs(arr[i]-mean),2);
    }
    cout << value << endl;
    
    //Divide and square root
    value /= 5;
    value = sqrt(value);
    
    return value;
}

int main(){
  cout << standardDeviation(1,2,3,4,5) << endl; //example
}
