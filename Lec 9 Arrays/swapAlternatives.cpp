// Problem statement
// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.

// You don't need to print or return anything, just change in the input array itself.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1sec
// Sample Input 1:
// 1
// 6
// 9 3 6 12 4 32
// Sample Output 1 :
// 3 9 12 6 32 4
// Sample Input 2:
// 2
// 9
// 9 3 6 12 4 32 5 11 19
// 4
// 1 2 3 4
// Sample Output 2 :
// 3 9 12 6 32 4 11 5 19
// 2 1 4 3

#include <bits/stdc++.h>
using namespace std;

int *swapAlternative(int ar[], int n)
{
	for (int i = 0; i < n - 1; i += 2)
	{
		int temp = ar[i];
		ar[i] = ar[i + 1];
		ar[i + 1] = temp;
	}
	return ar;
}

int main()
{
	int pass;
	cin >> pass;
	while (pass > 0)
	{
		int n;
		cin >> n;
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}

		// Call function
		swapAlternative(ar, n);

		for (int i = 0; i < n; i++)
		{
			cout << ar[i] << " ";
		}
		pass--;
	}
	return 0;
}

// Solution
// public class Solution {

//     public static void swapAlternate(int arr[]) {
//     	 int i;
//       for(i = 0; i < arr.length - 1;i = i + 2){
//         int t = arr[i];
//         arr[i] = arr[i + 1];
//         arr[i + 1] = t;
//       }
//     }
// }

// Main function
// import java.util.Scanner;
// public class Runner {

//     public static void main(String[] args)  {
//         Scanner sr = new Scanner(System.in);
//         int t = sr.nextInt();
//         while(t > 0)
//         {
//             int n=sr.nextInt();
//             int[] arr=new int[n];
//             for (int i =0 ; i<n;i++)
//             {
//                 arr[i]=sr.nextInt();
//             }
//             Solution.swapAlternate(arr);
//             for(int i=0;i<n;i++)
//             {
//                 System.out.print(arr[i]+" ");
//             }
//             System.out.println();
//             t -= 1;
//         }
//     }
// }