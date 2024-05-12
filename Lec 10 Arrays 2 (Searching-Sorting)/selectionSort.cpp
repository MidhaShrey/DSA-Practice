// Problem statement
// Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.

//  Note:
// Change in the input array/list itself.

// Example:
// Input:
// N = 5
// arr = {8, 6, 2, 5, 1}

// Output:
// 1 2 5 6 8
// Explanation: add-image

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 6
// 2 13 4 1 3 6
// Sample Output 1:
// 1 2 3 4 6 13
// Explanation Of Sample Input 1:
//  Select 1 and swap with element at index 0. arr= {1,13,4,2,3,6}

//  Select 2 and swap with element at index 1. arr= {1,2,4,13,3,6}

//  Select 3 and swap with element at index 2. arr= {1,2,3,13,4,6}

//  Select 4 and swap with element at index 3. arr= {1,2,3,4,13,6}

//  Select 6 and swap with element at index 4. arr= {1,2,3,4,6,13}
// Sample Input 2:
// 5
// 9 3 6 2 0
// Sample Output 2:
// 0 2 3 6 9
// Constraints :
// 1 <= N <= 10^3
// 0 <= arr[i] <= 10^5
// Time Limit: 1 sec

// C++

#include <bits/stdc++.h>
using namespace std;

void swap(int *f, int *s)
{
	int temp = *f;
	*f = *s;
	*s = temp;
}

void selectionSort(int ar[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int index = i;
		int minVal = ar[index];
		for (int j = i + 1; j < n; j++)
		{
			if (ar[j
			] < minVal)
			{
				minVal = ar[j];
				index = j;
			}
		}
		int temp = minVal;
		minVal = ar[i];
		ar[i] = temp;
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	selectionSort(arr, n);
	cout << "Sorted array: ";
	printArray(arr, n);
	return 0;
}

// public class Solution {

//     public static void selectionSort(int[] arr) {
//     	for(int i=0 ; i< arr.length ; i++){
//             int index = i;
//             for(int j=i+1 ; j<arr.length ; j++){
//                 if(arr[j] < arr[index]){
//                     index = j;
//                 }
//             }
//             int smallestNumber = arr[index];
//             arr[index] = arr[i];
//             arr[i] = smallestNumber;
//         }
//     }

// }

// Video Solution

// public class SelectionSort {
// public static void printArray(int[]arr){
//     int n=arr.length;
//     for(int i=0;i<n;i++){
//         System.out.println(arr[i]);
//     }
// }
// public static void selectionSort(int[] arr){
//     int n=arr.length;
//     for(int i=0;i<n-1;i++){
//         //Insert element at ith position
//         int min=Integer.MAX_VALUE;
//         int minIndex=-1;
//         for(int j=i;j<n;j++){
//             //Finding the minimum element among j positions
//             if(arr[j]<min){
//                 min=arr[j];
//                 minIndex=j;
//             }
//         }
//         //Swap element at minIndex with the ith element
//         int temp=arr[minIndex];
//         arr[minIndex]=arr[i];
//         arr[i]=temp;
//     }
// }
    
// public static void main(String args[]) {
//     int[] arr={1,6,4,8,0,3};
//     selectionSort(arr);
//     printArray(arr);
//     }
// }
