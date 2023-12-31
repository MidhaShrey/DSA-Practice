// E
// DE
// CDE
// BCDE
// ABCDE

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int num = n;
	for (int i = 0; i <= n; i++)
	{
		int a = 65+num;
		for (int j = i; j > 0; j--)
		{
			cout<<char(a-j);
		}
		// num--;
		cout<<endl;
	}
	return 0;
}