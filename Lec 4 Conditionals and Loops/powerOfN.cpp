#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,n;
	cin>>x>>n;
	int p = 1;
	for (int i = 1; i <= n; i++)
	{
		p*=x;
	}
	cout<<p;
	return 0;
}