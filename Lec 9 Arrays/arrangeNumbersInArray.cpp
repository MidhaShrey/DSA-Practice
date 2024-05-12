// Problem statement
// You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.

// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.

// Note:
// You need not print the array. You only need to populate it.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^4

// Time Limit: 1sec
// Sample Input 1 :
// 1
// 6
// Sample Output 1 :
// 1 3 5 6 4 2
// Explanation of Sample Input 1 :
// Since the value of N is 6, the number will be stored in the array in such a fashion that 1 will appear at 0th index, then 2 at the last index, in a similar fashion 3 is stored at index 1. Hence the array becomes 1 3 5 6 4 2.
// Sample Input 2 :
// 2
// 9
// 3
// Sample Output 2 :
// 1 3 5 7 9 8 6 4 2
// 1 3 2

// C++
#include <bits/stdc++.h>
using namespace std;

int *arrange(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = n;
	}
	for (int i = 0; i < n/2; i++)
	{
		ar[i] = 2*i+1;
		ar[n-i-1] = 2*i+2;
	}
	return ar;
}

int main()
{
	int row;
	cin >> row;
	while (row > 0)
	{
		int n;
		cin >> n;
		int arr[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout<<arr[i]<<" ";
		}
		row--;
	}
	return 0;
}

// Java
// import java.util.Scanner;
// public class Runner {

//     public static void main(String[] args)  {
//         Scanner sr = new Scanner(System.in);
//         int t = sr.nextInt();
//         while(t > 0)
//         {
//             int n=sr.nextInt();
//             int[] arr=new int[n];
//             Solution.arrange(arr, n);
//             for(int i=0;i<n;i++)
//             {
//                 System.out.print(arr[i]+" ");
//             }
//             System.out.println();
//             t -= 1;
//         }
//     }
// }

// public class Solution {

//     public static int[] arrange(int[] arr, int n) {
//         for(int i=0;i<n;i++)
//         {
//             arr[i]=n;
//         }
//         for(int i=0;i<n/2;i++)
//         {
//             arr[i]=2*i+1;
//             arr[n-1-i]=2*i+2;
//         }

//         return arr;
//     }
// }