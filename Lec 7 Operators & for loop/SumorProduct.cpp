// Write a program that asks the user for a Number N and a choice C and then gives them a possibility to choose between the 
// computing the sum and computing the product of all the integers in the range from 1 to N.
// if C = 1 => print the sum , c=2 print the product else print -1; 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c;
	cin>>n>>c;
	if (c==1)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum+=i;
		}
		cout<<sum;
	}
	else if (c == 2)
	{
		int prod = 1;
		for (int i = 0; i < n; i++)
		{
			prod*=i;
		}
		cout<<prod;
	}
	else
	{
		cout<<"-1";
	}	
	return 0;
}