// Palindrome number
// Check whether a given number 'n' is a palindrome number.
// Note:
// Palindrome numbers are the numbers that don't change when reversed.
// You don't need to print anything. Just implement the given function.
// Example:
// Input: 'n' = 51415 Output: true
// Explanation: On reversing, 51415 gives 51415.
// Input Format:
// The first and only line of the input contains the number 'n'.
// Output format:
// Return a boolean value True or False.

// Solution

// import java.util.Scanner;
// public class Main {
// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
//         int num = sc.nextInt();
//         int reversedNum=0, remainder;
//         int originalNum = num;
//         while(num !=  0){
//             remainder = num%10;
//             reversedNum = reversedNum * 10 + remainder;
//             num /= 10;
//         }
//         if(originalNum == reversedNum){
//             System.out.println("true");
//         }
//         else{
//             System.out.println("false");
//         }
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

void ispalindrome(int num)
{
	int rev = 0, n = num;
	while (num != 0)
	{
		int rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if (n == rev)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	ispalindrome(n);
	return 0;
}