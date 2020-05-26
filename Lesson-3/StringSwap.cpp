#include <iostream>
using namespace std;

int main()
{
  string str1;
  string str2;
  cin >> str1 >> str2;
  str1+=str2;
  str2 = str1.substr(0, str1.size()-str2.size());
  str1 = str1.substr(str2.size(), str1.size());
  cout << str1 << " " << str2 << endl;
}
