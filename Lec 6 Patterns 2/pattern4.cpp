#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i = 1,k=n;
	while (i<=n)
	{
		int j = 1;
		while(j <= n-i+1)
		{
			cout<<k;
			j++;
		}
		cout<<endl;
		i++;
		k--;
	}
	return 0;
}