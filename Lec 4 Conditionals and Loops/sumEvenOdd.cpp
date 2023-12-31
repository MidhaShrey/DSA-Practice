#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int es = 0, os = 0;
	int digit;
	while (n>0)
	{
		digit = n%10;
		if (digit%2 ==0)
		{
			es+=digit;
		}
		else
		{
			os+=digit;
		}
		n/=10;
	}
	cout<<es<<endl<<os;
	return 0;
}