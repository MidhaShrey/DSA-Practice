// A
// BC
// CDE
// DEFG

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		char s = ('A'+i);
		for (int j = 0; j <= i; j++)
		{
			cout<<s;
			s++;
		}
		cout<<endl;
	}
	return 0;
}