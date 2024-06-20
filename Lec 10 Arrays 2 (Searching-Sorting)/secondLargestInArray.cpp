// Problem statement
// You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 10^2
// 1<=arr[i]<=10^3

// Time Limit: 1 sec
// Sample Input 1:
// 5
// 4 3 10 9 2
// Sample Output 1:
// 9
// Sample Input 2:
// 7
// 13 6 31 14 29 44 3
// Sample Output 2:
// 31

// C++
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int getSecondLargest(int arr[], int n) {
    int max = arr[0];
    int secondMax = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i]!= max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = getSecondLargest(arr, n);
    cout << "The second largest element: " << result << endl;
    return 0;
}

// Java
// public class Solution {  
//     public static int secondLargestElement(int[] arr) {
//         if((arr.length <= 1) || (arr[0] == arr[arr.length-1])){
//             return -2147483648;
//         }
//         int largest = Integer.MIN_VALUE;
//         int secondLargest = Integer.MIN_VALUE;
//         for(int j=0 ; j<arr.length ; j++){
//             if(arr[j] > largest){
//                 secondLargest = largest;
//                 largest = arr[j];
//             }
//             else if(arr[j] == largest){
//                 continue;
//             }
//             else if(arr[j] < largest){
//                 if(arr[j] > secondLargest){
//                     secondLargest = arr[j];
//                 }
//             }
//         }
//         return secondLargest;
//     }
// }