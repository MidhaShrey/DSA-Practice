#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i = 1;
	while (i<=n)
	{
		int spaces = 1;
		while (spaces <= n-i)
		{
			cout<<" ";
			spaces++;
		}
		int digit = 1;
		while(digit <= i)
		{
			cout<<digit;
			digit++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}