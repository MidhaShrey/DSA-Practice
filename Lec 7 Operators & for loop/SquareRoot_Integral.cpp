// Given a number n, find its square root. You need to find and print only the integral part of square root of n.
#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	int result = 1, i = 1;
	while (result <= n)
	{
		i++;
		result = i*i;
	}
	return i-1;
}

int main()
{
	int n;
	cin>>n;
	cout<<floorSqrt(n)<<endl;
	return 0;
}