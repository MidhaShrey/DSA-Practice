#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		p = i;
		for (int j = 0; j < i; j++)
		{
			cout<<p++;
		}
		cout<<endl;
	}
	return 0;
}