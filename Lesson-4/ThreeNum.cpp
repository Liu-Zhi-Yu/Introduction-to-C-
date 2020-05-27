#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  int mx=num1;
  int mn=num1;
  if (mx<num2)
  {
    mx=num2;
  }
  if (mx<num3)
  {
    mx=num3;
  }
  if (mn>num2)
  {
    mn=num2;
  }
  if (mn>num3)
  {
    mn=num3;
  }
  if (abs(num1-num2)<(mx-mn) && abs(num2-num3)<(mx-mn) && abs(num3-num1)<(mx-mn))
  {
    cout << "These numbers are within " << (mx-mn) << "  of each other" << endl;
  }
  cout << mx << " " << mn << endl;
}
