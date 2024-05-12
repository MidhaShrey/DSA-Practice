// Problem statement
// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.

// Note:
// Fibonacci series is the series of numbers where each number is obtained by adding two previous numbers. The first two numbers in the Fibonacci series are 0 and 1.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= n <= 10^4
// Sample Input 1 :
// 5
// Sample Output 1 :
// true
// Sample Input 2 :
// 14
// Sample Output 2 :
// false

#include <bits/stdc++.h>
using namespace std;

bool checkMember(int n)
{
	int i, f, s, t, flag = 0;
	for (int i = 0; i < 2 * n; i++)
	{
		t = f + s;
		if (t == n)
		{
			flag = 1;
		}
		f = s;
		s = t;
	}
	if (flag == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cin >> n;
	bool ans = checkMember(n);
	cout<<ans;
	return 0;
}