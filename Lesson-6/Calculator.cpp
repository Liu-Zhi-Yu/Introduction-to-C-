#include <iostream>
#include <string>
using namespace std;

int Calculator(int x, int y, string operation){
  if (operation == "+")
    return x+y;
  else if (operation == "-")
    return x-y;
  else if (operation == "*")
    return x*y;
  else if (operation == "%")
    return x%y;
}

int main(){
  int num1;
  int num2;
  string value;
  cout << "Enter a number." << endl;
  cin >> num1;
  
  cout << "Enter another number." << endl;
  cin >> num2;
  
  cout << "Enter a valid operator. (+, -, *, %)" << endl;
  cin >> value;
  
  cout << Calculator(num1, num2, value) << endl;
}
