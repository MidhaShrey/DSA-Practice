// ABCD
// BCDE
// CDEF
// DEFG

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char a = char('A'+i);
		for (int j = 0; j < n; j++)
		{
			cout << a;
			a++;
		}
		cout << endl;
	}

	return 0;
}