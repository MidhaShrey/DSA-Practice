#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=1;
	cin>>n;
	while (i <= n)
	{
		int spaces = 1;
		while (spaces <= n-i)
		{
			cout<<" ";
			spaces++;
		}
		int j = 1;
		while (j <= i)
		{
			cout<<"*";
			j++;
		}
		int k = i-1;
		while (k >= 1)
		{
			cout<<"*";
			k--;
		}
		
		cout<<endl;
		i++;
	}
	return 0;
}