// Problem statement
// You are given an integer array 'ar' of size 'N'.

// You must sort this array using 'Bubble Sort'.

// Note:
// Change in the input array itself. You don't need to return or print the elements.
// Example:
// Input: ‘N’ = 7
// 'ar' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

// Explanation: After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28
// Explanation of Sample Output 1:
// After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
// Sample Input 2:
// 5
// 9 3 6 2 0
// Sample Output 2:
// 0 2 3 6 9
// Explanation of Sample Output 2:
// After applying bubble sort on the input array, the output is [0 2 3 6 9].
// Constraints :
// 1 <= N <= 10^3
// 0 <= ar[i] <= 10^9
// Time Limit: 1 sec

// C++

#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int ar[], int n)
{
	int isUnsorted = false;
	do
	{
		isUnsorted = false;
		for (int i = 0; i < (n - 1); i++)
		{
			if (ar[i] > ar[i + 1])
			{
				isUnsorted = true;
				for (; i < (n - 1); i++)
				{
					if (ar[i] > ar[i + 1])
					{
						swap(ar[i], ar[i + 1]);
					}
				}
			}
		}
	} while (isUnsorted);
}

int main()
{
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	bubbleSort(ar, n);
	cout<<"{ ";
	for (int i = 0; i < n; i++)
	{
		cout << ar[i]<<", ";
	}
	cout<<"}";
	return 0;
}

// Java

// public class Solution {
//     public static void bubbleSort(int[] ar){
//     	for (int i=0 ; i<ar.length ; i++){
//             for(int j=0 ; j<ar.length-1 ; j++){
//                 if(ar[j] > ar[j+1]){
//                     int t = ar[j];
//                     ar[j] = ar[j+1];
//                     ar[j+1] = t;
//                 }
//             }
//         }
//     }
// }

// import java.util.Scanner;
// public class Runner {
// 	public static void main(String[] args) {
// 		Scanner sc= new Scanner(System.in);
// 		int n = sc.nextInt();
// 		int[] ar = new int[n];
// 		for(int i=0;i<n;i++)
// 		{
// 		    ar[i] = sc.nextInt();
// 		}
// 		Solution.bubbleSort(ar, n);
//         	for(int i=0;i<n;i++)
//         	{
//             		System.out.print(ar[i]+" ");
//         	}

// 	}
// }