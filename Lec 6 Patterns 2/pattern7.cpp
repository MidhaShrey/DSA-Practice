// Triangle of Numbers
//    1
//   232
//  34543
// 4567654

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,val=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int j = 1;
		while (j<=n-i)
		{
			cout<<" ";
			j++;
		}
		int k = 1;
		val = i;
		while (k<=i)
		{
			cout<<val++;
			k++;
		}
		int m = val-k-1;
		while (m>1)
		{
			cout<<m;
			m--;
		}
		
		cout<<endl;
	}
	return 0;
}