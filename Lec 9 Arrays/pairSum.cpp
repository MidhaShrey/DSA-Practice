// Problem statement
// You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.

// Note:
// Given array/list can contain duplicate elements.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= X <= 10^9
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 9
// 1 3 6 2 5 4 3 2 4
// 7
// Sample Output 1:
// 7
// Sample Input 2:
// 2
// 9
// 1 3 6 2 5 4 3 2 4
// 12
// 6
// 2 8 10 5 -2 5
// 10
// Sample Output 2:
// 0
// 2

//  Explanation for Input 2:
// Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.

// For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).

#include <bits/stdc++.h>
using namespace std;

int pairSum(int ar[], int n, int sum)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(ar[i] + ar[j] == sum)
            {
                count++;
            }
		}
	}
	return count;
}

int main()
{
	int pass;
	cin >> pass;
	while (pass != 0)
	{
		int n;
		cin >> n;
		int arr[n], sum;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> sum;
		int ans = pairSum(arr, n, sum);
		cout << "OUTPUT:" << ans << endl;
		pass--;
	}

	return 0;
}

// Solution
// public class Solution {

//     public static int pairSum(int a[], int x) {
//     	int n = a.length;
//         int c =0;
//         for(int i=0; i<n-1; i++)
//         {
//             for(int j=i+1; j<n;j++)
//             {
//                 if(a[i]+a[j]==x)
//                 {
//                    c++;
//                 }
//             }
//         } return c;
//     }
// }