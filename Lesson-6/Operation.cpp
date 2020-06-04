#include <iostream>
#include <cmath>
using namespace std;

double Operation(int a, int b, int c){
    double firstVal = ((-1*b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    double secondVal = ((-1*b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    return firstVal*secondVal;
}

int main(){
  int num1;
  int num2;
  int num3;
  cout << "Enter a number." << endl;
  cin >> num1;
  
  cout << "Enter another number." << endl;
  cin >> num2;
  
  cout << "Enter another number." << endl;
  cin >> num3;
  
  cout << Operation(num1, num2, num3) << endl;
}
