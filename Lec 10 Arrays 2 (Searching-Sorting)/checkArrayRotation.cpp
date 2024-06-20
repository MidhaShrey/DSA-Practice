// Problem statement
// You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' (K is greater than 0) in the right hand direction.

// Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 2 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 6
// 5 6 1 2 3 4
// Sample Output 1:
// 2
// Sample Input 2:
// 2
// 5
// 3 6 8 9 10
// 4
// 10 20 30 1
// Sample Output 2:
// 0
// 3

// C++

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int checkRotation(const vector<int> &arr)
{
	int low = 0, high = arr.size() - 1;
	while (low < high)
	{
		int mid = low + (high - low) / 2;
        if (arr[mid] > arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
	}
	return low;
}

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		int pos = checkRotation(v);
		cout << pos;
	}
	return 0;
}

// Java
// public class Solution {
//     public static int arrayRotateCheck(int[] arr){
//         int n = arr.length;
//         for(int i=0 ; i<n-1 ; i++){
//             if(arr[i] > arr[i+1])
//                 return i+1;
//         }
//         return 0; // return 0 if the array is not rotated
//     }
// }