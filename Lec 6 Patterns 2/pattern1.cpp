#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n-1-i; k++)
		{
			cout<<" ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}