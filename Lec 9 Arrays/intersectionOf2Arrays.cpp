// Problem statement
// You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

// Note :
// Input arrays/lists can contain duplicate elements.

// The intersection elements printed would be in the order they appear in the first array/list(ARR1)

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7
// 2
// 10 10
// 1
// 10
// Sample Output 1 :
// 2 4 3
// 10
// Sample Input 2 :
// 1
// 4
// 2 6 1 2
// 5`
// 1 2 3 4 2
// Sample Output 2 :
// 2 1 2
// Explanation for Sample Output 2 :
// Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.

#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

void printIntersection(int ar[], int br[], int size1, int size2)
{
	int i, j;
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			if (ar[i] == br[j])
			{
				cout << "Intersection: "<< ar[i] << " ";
				br[j] = INT_MIN;
				break;
			}
		}
	}
}

int main()
{
	int passes;
	cin >> passes;
	while (passes > 0)
	{
		int size1, size2;
		cin >> size1 >> size2;
		int arr1[size1], arr2[size2];
		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}
		for (int j = 0; j < size2; j++)
		{
			cin >> arr2[j];
		}
		passes--;
		printIntersection(arr1, arr2, size1, size2);
	}
	return 0;
}

// Solution
// public class Solution
// {
// public static void intersections(int a[], int b[])
// 	{

// 		int n = a.length;
// 		int m = b.length;
// 		for (int i = 0; i < n; i++)
// 		{
// 			for (int j = 0; j < m; j++)
// 			{
// 				if (a[i] == b[j])
// 				{
// 					System.out.print(a[i] + " ");
// 					b[j] = Integer.MIN_VALUE;
// 					break;
// 				}
// 			}
// 		}
// 	}
// }