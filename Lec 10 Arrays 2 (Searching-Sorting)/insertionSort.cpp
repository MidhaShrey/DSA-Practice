// Problem statement
// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Insertion Sort' recursively.

//  Note:
// Change in the input array itself. You don't need to return or print the elements.
// Example:
// Input: ‘N’ = 7
// 'arr' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

// Explanation: After applying insertion sort on the input array, the output is [1 2 3 4 6 13 28].
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 5
// 9 3 6 2 0
// Sample Output 1:
// 0 2 3 6 9
// Sample Input 2:
// 4
// 4 3 2 1
// Sample Output 2:
// 1 2 3 4 
// Constraints :
// 0 <= N <= 10^3
// 0 <= arr[i] <= 10^5
// Time Limit: 1 sec

// C++

#include <iostream>
using namespace std;
void display(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
}

void insertionSort(int ar[], int n)
{
	int j;
	for (int i = 0; i <= n; i++)
	{
		j=i+1;
		while (j > 0 && ar[j] < ar[j - 1])
		{
			swap(ar[j],ar[j-1]);
			j--;
		}
	}
	display(ar, n);
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
	
	insertionSort(ar, n);
	return 0;
}

// Java

// public class InsertionSort {
// public static void printArray(int[]arr){
//     int n=arr.length;
//     for(int i=0;i<n;i++){
//         System.out.println(arr[i]);
//     }
// }
// public static void insertionSort(int[] arr){
//     int n=arr.length;
//     for(int i=1;i<n;i++){
//         //Insert ith element in sorted position
//         int j=i-1;
//         int temp=arr[i];
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         //Position will be j+1;
//         arr[j+1]=temp;
//     }
// }
    
// public static void main(String args[]) {
//     int[] arr={9,6,3,7,2,8,1,5};
//     insertionSort(arr);
//     printArray(arr);
//     }
// }