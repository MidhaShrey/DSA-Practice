// Diamond
// 				Row		Spaces	Stars
//     *		1		2		1
//   * * *		2		1		3
// * * * * *	3		0		5
//   * * *		4		1		3
//     * 		5		2		1
// divide problem in 2 parts:
// Part 1: n1=(n+1)/2
// part 2: n1=n/2 or n1-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	int spaces = n / 2;
	for (int i = 0; i < n; i++)
	{
		if (i <= (n / 2))
		{
			for (int j = 0; j <= spaces; j++)
			{
				cout << " ";
			}
				spaces--;
			int k;
			for (int j = 0; j < (2 * i) + 1; j++)
			{
				cout<<"*";
			}
			cout << endl;
		}
		else if (i > n / 2)
		{
			for (int j = 0; j < n; j++)
			{
			}
			cout << endl;
		}
	}
	return 0;
}

// Approach 1:(java)
// import java.util.Scanner;
// public class Solution {

//     public static void main(String[] args) {
//         Scanner scan = new Scanner(System.in);
//         int N=scan.nextInt();
//         int spaces=N/2;
//         int val=N-2;
//         for(int i=0;i<N;i++)
//         {

//             if (i<=(N/2))
//             {
//                 for (int j=0;j<spaces;j++)
//             	{
//                 	System.out.print(" ");
//             	}
//                 spaces--;

//                 for (int j=0;j<(2*i)+1;j++)
//             	{
//                 	System.out.print("*");
//             	}
//             }
//             else
//             {
//             	spaces++;

//                 for (int j=0;j<=spaces;j++)
//             	{
//                 	System.out.print(" ");
//             	}
//                 for (int j=0;j<val;j++)
//             	{
//                 	System.out.print("*");
//             	}
//                 val=val-2;
//             }
//             System.out.println(" ");
//         }
//         scan.close();
//     }
// }