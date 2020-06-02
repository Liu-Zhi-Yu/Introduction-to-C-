#include <iostream>
using namespace std;

int main(){
  double num = 3;
  double sum = 0;
  for (int i = 0; i < 100; i++){
    sum += num;
    num /= 3;
  }
  
  cout << sum << endl;
}
