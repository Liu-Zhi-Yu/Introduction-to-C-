#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 10; i >= 0; i--) {
        v.push_back(i);
    }
    sort (v.begin()+3, v.begin()+8);
    for (int i = 0; i < 10; i++) {
        cout << v[i] << endl;
    }
}
