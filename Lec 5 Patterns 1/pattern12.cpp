// Alpha pattern
// ABCD
// ABCD
// ABCD
// ABCD
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char k;
	for (int  i = 1; i <= n; i++)
	{
		k = 65;
		for (int j = 1; j <= n; j++)
		{
			cout<<k++;
		}
		cout<<endl;
	}
	return 0;
}