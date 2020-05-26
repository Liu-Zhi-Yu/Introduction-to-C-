#include <iostream>
#include <string>
using namespace std;

int main(){
  int a;
  int b;
  cin >> a;
  cin >> b;
  
  cout << "Before Swap:" << endl;
  cout << "a is " + to_string(a) << endl;
  cout << "b is " + to_string(b) << endl;
  cout << endl;
  
  b = a*b;
  a = b/a;
  b = b/a;
  
  cout << "After Swap:" << endl;
  cout << "a is " + to_string(a) << endl;
  cout << "b is " + to_string(b) << endl;
  cout << endl;
}
