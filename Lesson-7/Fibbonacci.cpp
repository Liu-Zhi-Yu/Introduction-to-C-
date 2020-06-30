#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cout << "Please enter a number:" << endl;
    cin >> n;
    
    vector<int> v;
    int num1 = 1;
    int num2 = 2;
    v.push_back(num1);
    v.push_back(num2);
    
    for (int i = 0; i < n-2; i++){
        int fibn = num1 + num2;
        v.push_back(fibn);
        num1 = num2;
        num2 = fibn;
    }
    
    cout << (double) v[v.size()-1]/v[v.size()-2] << endl;
}
