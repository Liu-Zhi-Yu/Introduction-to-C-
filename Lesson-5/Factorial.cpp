#include <iostream>
using namespace std;

int main(){
  for (int i = 1; i <= 10; i++){
    int num = 1;
    for (int j = i; j >= 1; j--){
      num *= j;
    }
    cout << num << endl;
  }
}
