// Given input consists of n numbers. Check whether those n numbers form an arithmetic progression or not. Print true or false.
// Input format :
// Line 1 : n
// Line 2 : n numbers
// Sample Input 1 :
// 6
// 2 6 10 14 18 22
// Sample Output 1 :
// true
// Sample Input 2 :
// 6
// 2 6 10 15 19 23
// Sample Output 2 :
// false

// Logic:
// Logic is like the difference between the two consecutive terms should be constant

#include <bits/stdc++.h>
using namespace std;

bool checkIsAP(int n, int ar[])
{
	// Edge Cases:
	if (n == 1)
	{
		return true;
	}
	sort(ar,ar+n);
	// Normal Cases:
	int diff = ar[1] - ar[0];
	for (int i = 2; i < n; i++)
		if (ar[i] - ar[i - 1] != diff)
			return false;
	return true;
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

	return 0;
}

// Solution
// import java.util.Arrays;
// import java.util.Scanner;
// public class Main {
//     static boolean checkIsAP(int []arr , int n){
//         if(n == 1)
//             return true;
//         Arrays.sort(arr);
//         int d = arr[1] - arr[0];
//         for(int i=2 ; i<n ; i++)
//             if(arr[i] - arr[i-1] != d)
//                 return false;
//         return true;
//     }
// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
//         int size = sc.nextInt();
//         int [] arr  = new int[size];
//         int n = arr.length;
//         for(int i=0 ; i<n ; i++){
//             arr[i] = sc.nextInt();
//         }
//         if(checkIsAP(arr,n))
//             System.out.println("true");
//         else
//             System.out.println("false");
// 	}
// }