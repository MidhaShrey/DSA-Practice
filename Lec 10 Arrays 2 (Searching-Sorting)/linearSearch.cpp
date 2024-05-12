#include <bits/stdc++.h>
using namespace std;

int linearSearch(int ar[], int n, int searchValue)
{
	for (int i = 0; i < n; i++)
	{
		if (ar[i] == searchValue)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	int searchItem;
	cin >> searchItem;

	int result = linearSearch(ar, n, searchItem);
	// if (result == -1)
	// {
	// 	cout<<"Element not found"<<endl;
	// }
	// else
	// {
	// 	cout<<"Element found at index "<<result<<endl;
	// }
	cout << result;
	return 0;
}
