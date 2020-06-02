#include <iostream>
using namespace std;

int main(){
  int arr[10];
  for (int i = 0; i < 10; i++){
    arr[i] = (rand()%10) + 1;
  }
  
  int numTimes = 11;
  while (numTimes > 10){
    cout << "How many times do you want to iterate through the array?" << endl;
    cin >> numTimes;
  }
  
  for (int i = 0; i < numTimes; i++){
    cout << arr[i] << endl;
  }
}
