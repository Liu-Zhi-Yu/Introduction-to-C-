#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (num>=13 && num<=19)
  {
    num*=2;
  }
  else if (num<13)
  {
    num%=3;
  }
  else if (num>19)
  {
    num+=3;
  }
  cout << num << endl;
}
