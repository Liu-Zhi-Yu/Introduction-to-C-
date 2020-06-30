#include <iostream>
using namespace std;


int n;
int recurse (int ind, int arr[], int sum)
{
	if (ind>=n)
	{
		return sum==0;
	}
	if (recurse(ind+1, arr, sum-arr[ind]))
	{
		return true;
	}
	if (recurse(ind+1, arr, sum))
	{
		return true;
	}
	return false;
}

int main()
{
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	int sum;
	cin >> sum;
	cout << recurse(0, arr, sum) << endl;
}
