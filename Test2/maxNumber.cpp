// Problem statement
// We are given a 4 digit number using digits 1 to 9. What is the maximum 3 digit number that we can make by removing one digit from the given integer.

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input :
// 5438
// Sample Output :
// 548
// Explanation :
// 1. If we remove 5, the new number is 438.
// 2. If we remove 4, the new number is 538.
// 3. If we remove 3, the new number is 548.
// 4. If we remove 8, the new number is 543.
// Out of the 4 cases removing 3 gives us the maximum 3 digit number i.e 548
// for values of k
// k = 0: 5438 % 1 + 5438 / 10 * 1 = 0 + 543 = 543
// k = 1: 5438 % 10 + 5438 / 100 * 10 = 8 + 540 = 548s
// k = 2: 5438 % 100 + 5438 / 1000 * 100 = 38 + 500 = 538
// k = 3: 5438 % 1000 + 5438 / 10000 * 1000 = 438 + 0 = 438

#include <bits/stdc++.h>
using namespace std;

int max3Digit(int num)
{
	int max_num = 0;
    for (int k = 0; k < 4; k++) {
        int new_num = (num % (10 * (k + 1))) / (10 * k) + (num / (10 * (k + 2))) * (10 * (k + 1));
        if (new_num > max_num) {
            max_num = new_num;
        }
    }
    return max_num;
}

int main()
{
	int num;
	cin >> num;
	cout << max3Digit(num) << endl;
	return 0;
}

// Answer:

// public class Solution {
//     public static int max_number(int n){
//         int max = 0;
//         for(int i=1 ; i<n ; i = i*10){
//             max = Math.max(max, n%i + n / (i * 10) * i);
//         }
//         return max;
//     }
// }
