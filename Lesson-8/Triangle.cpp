#include <iostream>
using namespace std;

int triangle (int n)
{
  if (n==1)
  {
    return 1;
  }
  return n+triangle(n-1);
}

int main()
{
  int num;
  cin >> num;
  triangle(num);
}
