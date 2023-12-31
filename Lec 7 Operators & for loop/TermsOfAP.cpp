//  WAP to print first x terms of series 3N+2 which are not multiple of 4
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int res,no = 1, count = 1;
	while (count <= n)
	{
		res = 3 * no + 2;
		if (res % 4 != 0)
		{
			cout<<res<<" ";
			count++;
		}
		no++;
	}
	return 0;
}