// reverse number printing
// 1
// 21
// 321
// 4321
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n;
	for (int  i = 1; i <= n; i++)
	{
		k = i;
		for (int j = 1; j <= i; j++)
		{
			cout<<k--;
		}
		cout<<endl;
	}
	return 0;
}