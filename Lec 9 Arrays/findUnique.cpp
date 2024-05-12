
// Problem statement
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 3 1 6 3 6 2
// Sample Output 1:
// 1
// Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.
// Sample Input 2:
// 2
// 5
// 2 4 7 2 7
// 9
// 1 3 1 3 6 6 7 10 7
// Sample Output 2:
// 4
// Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, and the number 4 is present only once. So, the unique number in this array is 4.

// 10
// Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.


#include <iostream>
using namespace std;

int findUnique(int arr[], int n){
	int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1)
            return arr[i];
    }
    return 0;
}

int main() {
    int arr[] = {1, 4, 4, 6, 6, 7, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findUnique(arr, n);
    if(result != 0)
        cout << "The unique element is: " << result << endl;
    else
        cout << "There is no unique element in the array" << endl;
    return 0;
}

// Better approach using xor operator
// int findUnique(int arr[], int n){
//     int xor_all = 0;
//     for(int i=0; i<n; i++){
//         xor_all ^= arr[i];
//     }
//     return xor_all;
// }

// int main() {
//     int arr[] = {1, 4, 4, 6, 6, 7, 7, 8, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = findUnique(arr, n);
//     cout << "The unique element is: " << result << endl;
//     return 0;
// }


// Solution

// Can use 2 Approaches  1. layman 2. xor
// public class Solution{  

//     public static int findUnique(int[] arr){
// 		int i,j,c;
//         for(i=0;i<arr.length;i++){
//             c=0;
//             for(j=0;j<arr.length;j++){
//                 if(arr[i]==arr[j])
//                     c++;
//             }
//             if(c==1)
//             {
//                 return arr[i];
//             }
//         }
//         return 0;
//     }
// }