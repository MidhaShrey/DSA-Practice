// Problem statement
// Given an array/list(ARR) of length N, you need to find and return the sum of all the elements in the array/list.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5

// Time Limit: 1sec
// Sample Input 1:
// 1
// 3
// 9 8 9
// Sample Output 1:
// 26
// Sample Input 2:
// 2
// 5
// 1 2 3 4 5
// 3
// 10 20 30
// Sample Output 2:
// 15
// 60

// C++

#include <bits/stdc++.h>
#include <array>
using namespace std;

int returnArraySum(int ar[], int length)
{
	int sum = 0;
	// int length = sizeof(ar)/sizeof(ar[0]);
	for (int i = 0; i < length; i++)
	{
		sum += ar[i];
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	while (n > 0)
	{
		int t;
		cin >> t;
		int ar[t];
		for (int i = 0; i < t; i++)
		{
			cin >> ar[i];
		}
		// Type 1
		// int l = 0;
		// for (auto i : ar)
		// {
		// 	l++;
		// }
		// int res = returnArraySum(ar, l);
		int res = returnArraySum(ar,t);
		cout << res << endl;

		// Type 2
		int sum = 0;
		int length = sizeof(ar) / sizeof(ar[0]);
		// cout<< "length" << length << endl;
		for (int i = 0; i < length; i++)
		{
			sum += ar[i];
		}
		cout << sum << endl;
		n--;
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
//             int size = sr.nextInt();
//             int[] input = new int[size];
//             for (int i = 0; i < size; i++)
//             {
//                 input[i] = sr.nextInt();
//             }
//             System.out.println(returnArraySum.sum(input));
//             t -= 1;
//         }
//     }
// }

// public class returnArraySum {
// 	public static int sum(int[] input) {
// 		int n=input.length;
//         int i,s=0;
//         for(i=0;i<n;i++)
//             s=s+input[i];
//         return s;
// 	}
// }