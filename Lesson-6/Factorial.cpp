#include <iostream>
using namespace std;

int factorial (int n){
  int number = 1;
  for (int i = n; i >= 1; i++){
    number *= i;
  }
  return number;
}

int main(){
  int value;
  cout << "Please enter a number to put into the factorial function." << endl;
  cin >> value;
  
  cout << factorial(value) << endl;
}
