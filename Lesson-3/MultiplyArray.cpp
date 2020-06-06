#include <iostream>
using namespace std;

int main()
{
    int MultiplyArray[5] = {1, 5, 8, 6, 5};
    
    MultiplyArray[1] = MultiplyArray[0]*MultiplyArray[1];
    MultiplyArray[2] = MultiplyArray[1]*MultiplyArray[2];
    MultiplyArray[3] = MultiplyArray[2]*MultiplyArray[3];
    MultiplyArray[4] = MultiplyArray[3]*MultiplyArray[4];
    
    cout << MultiplyArray[0] << endl;
    cout << MultiplyArray[1] << endl;
    cout << MultiplyArray[2] << endl;
    cout << MultiplyArray[3] << endl;
    cout << MultiplyArray[4] << endl;
 }
