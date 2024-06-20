// Problem statement
// For a given two-dimensional integer array/list of size (N x M), find and print the sum of each of the row elements in a single line, separated by a single space.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1sec
// Sample Input 1:
// 1
// 4 2
// 1 2
// 3 4
// 5 6
// 7 8
// Sample Output 1:
// 3 7 11 15
// Sample Input 2:
// 2
// 2 5
// 4 5 3 2 6
// 7 5 3 8 9
// 4 4
// 1 2 3 4
// 9 8 7 6
// 3 4 5 6
// -1 1 -10 5
// Sample Output 2:
// 20 32
// 10 30 18 -5

// CPP

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rowWiseSum(int **input, int nRows, int mCols)
{
	for (size_t i = 0; i < nRows; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < mCols; j++)
		{
			sum += input[i][j];
		}
		cout << "Sum of row " << i << ": " << sum << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int r, c;
		cin >> r >> c;
		int **ar = new int *[r];
		for (int i = 0; i < r; i++)
		{
			ar[i] = new int[c];
		}
		// Array Input
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cin >> ar[i][j];
			}
		}

		int sum = 0;
		for (int i = 0; i < r; i++)
		{
			for (size_t j = 0; j < c; j++)
			{
				sum += ar[i][j];
			}
			cout << "Sum of row " << i << ": " << sum << endl;
		}
	}
return 0;
}

// Java
// public class Solution {
// 	public static void rowWiseSum(int[][] mat) {
// 		int i, j, sum = 0;
//         for (i = 0; i < mat.length; ++i) {
//             for (j = 0; j < mat[i].length; ++j) {
//                 sum = sum + mat[i][j];
//             }
//             System.out.print(sum + " ");
//             sum = 0;
//         }
//     }
// 	}