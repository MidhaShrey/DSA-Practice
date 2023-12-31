#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for (int i = 2; i <= n; i++)
	{
		int count = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i%j==0)
			{
				count++;
			}
		}
		if (count == 1)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}