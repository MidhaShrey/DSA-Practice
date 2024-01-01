#include <bits/stdc++.h>
using namespace std;

// 1. Normal Execution without function
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

// 2. Using Function
int factorial(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int n, r, factN = 1, factNR = 1, factR = 1;
	cin >> n >> r;
	factN=factorial(n);
	factR=factorial(r);
	factNR=factorial(n-r);
	int result=factN/(factR*factNR);
	cout<<result;
}