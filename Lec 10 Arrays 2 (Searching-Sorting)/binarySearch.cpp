// Problem statement
// You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'.



// Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.



// Note:

// You must write an algorithm whose time complexity is O(LogN)


// Example:


// Input: ‘N’ = 7 ‘target’ = 3
// ‘A’ = [1, 3, 7, 9, 11, 12, 45]

// Output: 1

// Explanation: A = [1, 3, 7, 9, 11, 12, 45],
// The index of element '3' is 1.
// Hence, the answer is '1'.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= N <= 10^5
// 1 <= A[i] <= 10^9
// 1 <= target <= 10^9
// Time Limit: 1 sec
// Sample Input 1:
// 7
// 1 3 7 9 11 12 45
// 3
// Sample Output 1:
// 1
// Explanation of sample output 1:
// nums = [1, 3, 7, 9, 11, 12, 45],
// The index of element '3' is 1.
// Hence, the answer is '1'.


// Sample Input 2:
// 7
// 1 2 3 4 5 6 7
// 9
// Sample Output 2:
// -1
// Explanation of sample output 2:
// nums = [1, 2, 3, 4, 5, 6, 7],
// Element '9' doesn't exist.
// Hence, the answer is '-1'.

// C++
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int ar[], int n, int searchItem)
{
	int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(searchItem == ar[mid]){
            return mid;
        }
        else if(searchItem < ar[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
	int n;
	cin>>n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin>>ar[i];
	}
	int searchItem;
	cin>>searchItem;

	int result = binarySearch(ar, n, searchItem);
	cout<<result;

	return 0;
}



// public class Solution { 

//     public static int binarySearch(int[] arr, int x) {
//     	int index = -1;
//         int start = 0;
//         int end = arr.length-1;
//         while(start <= end){
//             int mid = (start + end)/2;
//             if(x == arr[mid]){
//                 index = mid;
//                 break;
//             }
//             else if(x < arr[mid]){
//                 end = mid-1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return index;
//     }

// }