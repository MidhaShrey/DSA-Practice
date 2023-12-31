// Check Number sequence

// You are given S, a sequence of n integers i.e. S = s1, s2, ...,
// sn. Compute if it is possible to split S into two parts: s1,
// s2, ..., si and si+1, si+2, ...., sn (0 <= i <= n) in such a way
// that the first part is strictly decreasing while the second is
// strictly increasing one.
// Note: We say that x is strictly larger than y when x > y.
// So, a strictly increasing sequence can be 1 4 8.
// However, 1 4 4 is NOT a strictly increasing
// sequence.
// That is, in the sequence if numbers are decreasing, they
// can start increasing at one point. Thereafter, they cannot
// decrease at any point further.
// Sequence made up of only increasing numbers or
// only decreasing numbers is a valid sequence. So, in
// both the cases, print true.
// You just need to print true/false. No need to split the
// sequence.
// Input format:
// Line 1: integer n
// Line 2: n integers of n lines
// Output: true or false

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[n];
	}
	bool flag = true;

	for (int i = 0; i < n; i++)
	{
		if (ar[i] < ar[i + 1] && ar[i + 1] > ar[i + 2])
		{
			flag = false;
			break;
		}
	}
	cout<<flag;
	return 0;
}

// Code:
// import java.util.Scanner;
// public class Main {

// 	public static void main(String[] args) {
// 		Scanner scan = new Scanner(System.in);
//     int n = scan.nextInt();
//     int[]num=new int [n];
//     for (int i=0;i<n;i++)
//     {
//         num [i] = scan.nextInt();
//     }
//     boolean flag=true;
//     for(int i = 0 ; i<n-2;i++)
//     {
//         if(num[i]<num[i+1] && num[i+1]>num[i+2])
//         {
//             flag=false;
//             break;
//         }
// 		}
//         System.out.println(flag);
// 	}
// }
