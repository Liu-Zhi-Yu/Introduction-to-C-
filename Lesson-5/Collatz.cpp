#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number to run through the Collatz sequence." << endl;
  cin >> num;
  
  int i = 0;
  while (i < 10){
    cout << num << endl;
    if (num % 2 == 0){
      num /= 2;
    } else {
      num *= 3;
      num++;
    }
    i++;
  }
}
