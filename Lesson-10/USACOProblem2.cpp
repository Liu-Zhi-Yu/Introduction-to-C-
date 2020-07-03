#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr[n];
    vector<int> v;
    
    char l; int r;
    while (cin >> l >> r){
        if (l == 'C'){
            v.push_back(r);
        } else if (l == 'R'){
            int num = v.front();
            arr[r-1].push_back(num);
            v.erase(v.begin());
        }
    }
    
    for (auto i: arr){
        cout << i.size() << " ";
        for (auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
}
