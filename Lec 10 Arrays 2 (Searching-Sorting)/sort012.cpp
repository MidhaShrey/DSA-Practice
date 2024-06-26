// Problem statement
// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.

// 'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

// Note:
// 1. You need to change in the given array/list itself. Hence, no need to return or print anything.
// 2. You are not allowed to sort the list/array directly.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 0 1 2 0 2 0 1
// Sample Output 1:
// 0 0 0 1 1 2 2
// Explanation:  The array contains three 0s, two 1s, and two 2s. After sorting the array in a single scan, the 0s should come first, then the 1s, and finally the 2s. So the output is 0 0 0 1 1 2 2.
// Sample Input 2:
// 2
// 5
// 2 2 0 1 1
// 7
// 0 1 2 0 1 2 0
// Sample Output 2:
// 0 1 1 2 2
// Explanation: The array contains one 0, two 1s, and two 2s. After sorting, the 0 comes first, then the 1s, and finally the 2s. So the output is 0 1 1 2 2.
// 0 0 0 1 1 2 2
// Explanation: The array contains three 0s, two 1s, and two 2s. After sorting, the 0s come first, then the 1s, and finally the 2s. So the output is 0 0 0 1 1 2 2.

// C++

#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
	int n1 = 0, n2 = 0, n3 = 0, i, j, k, l;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
			n1++;
		if (arr[i] == 1)
			n2++;
		if (arr[i] == 2)
			n3++;
	}
	i = 0;
	j = 0;
	while (j < n1)
	{
		arr[i] = 0;
		i++;
		j++;
	}
	k = 0;
	while (k < n2)
	{
		arr[i] = 1;
		i++;
		k++;
	}
	l = 0;
	while (l < n3)
	{
		arr[i] = 2;
		i++;
		l++;
	}
	for (int i = 0; i < n; i++)
	{
		cout<< arr[i]<<" ";
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
		sort012(ar, n);
		// sort(ar, ar + n);
	}
	return 0;
}

// Java

// public class Solution {
//     public static void sort012(int[] arr){
//     	int n1 = 0 , n2 = 0 , n3 = 0 , i , j;
//         for(i=0 ; i<arr.length ; i++){
//             if(arr[i] == 0)
//                 n1++;
//             if(arr[i] == 1)
//                 n2++;
//             if(arr[i] == 2)
//                 n3++;
//         }
//         i = 0;
//         j = 0;
//         while(j < n1){
//             arr[i] = 0;
//             i++;
//             j++;
//         }
//         j=0;
//         while(j < n2){
//             arr[i] = 1;
//             i++;
//             j++;
//         }
// j=0;
// while(j < n3){
//     arr[i] = 2;
//     i++;
//     j++;
// }
//     }
// }