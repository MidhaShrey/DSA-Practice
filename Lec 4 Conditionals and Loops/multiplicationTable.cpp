#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cout<<endl<<"Table of "<<n<<"is:\n";
	for(int i = 1; i<= 20; i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	return 0;
}