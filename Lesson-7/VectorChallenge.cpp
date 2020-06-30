#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << "The size of vector v is: " << v.size() << endl;
    for (int i = 0; i <= (int) v.size()/2 +1; i++) {
        v.erase(v.begin()+i);
    }
    for (int i =0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    v.clear();
    if (v.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector has stuff" << endl;
    }
}
