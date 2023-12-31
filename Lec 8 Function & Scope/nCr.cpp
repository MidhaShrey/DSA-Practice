#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, r;
	cin >> n >> r;
	int factN = 1;
	int factN = 1;
	for (int i = 1; i <= n; i++)
	{
		factN = factN * i;
	}
	int factR = 1;
	for (int i = 1; i <= r; i++)
	{
		factR = factR * i;
	}
	int factNR = 1;
	for (int i = 1; i <= n - r; i++)
	{
		factNR = factNR * i;
	}
	int result = factN / (factR * factNR);
	cout << result;
	return 0;
}