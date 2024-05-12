// Problem statement
// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.

// Note:
// You need to change in the given array/list itself. Hence, no need to return or print anything.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 0 1 1 0 1 0 1
// Sample Output 1:
// 0 0 0 1 1 1 1
// Sample Input 2:
// 2
// 8
// 1 0 1 1 0 1 0 1
// 5
// 0 1 0 1 0
// Sample Output 2:
// 0 0 0 1 1 1 1 1
// 0 0 0 1 1

// CPP
#include <bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(int ar[], int n)
{
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (ar[i] == 0)
		{
			i++;
		}
		if(ar[j] == 1)
		{
			j--;
		}
		else
		{
			swap(ar[i],ar[j]);
			i++;
			j--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout<<ar[i]<<" ";
	}
	
}

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int n;
		cin >> n;
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		sortZeroesAndOne(ar, n);
		cout << endl;
		t--;
	}

	return 0;
}

// Solution
// public class Solution {

//     public static void sortZeroesAndOne(int[] arr) {
//     	int c = 0,i;
// 		for(i = 0;i < arr.length;i++) {
// 			if(arr[i] == 0)
// 				c++;
// 		}
// 		for(i = 0; i < c;i++ ) {
// 			arr[i] = 0;
// 		}
// 		for(;i < arr.length;i++) {
// 			arr[i] = 1;
// 		}
//     }
// }