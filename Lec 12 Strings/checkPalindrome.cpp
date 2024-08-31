// Problem statement
// Given a string, determine if it is a palindrome, considering only alphanumeric characters.

// Palindrome
// A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
// Example:
// If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

// The expected output for this example will print, 'true'.
// From that being said, you are required to return a boolean value from the function that has been asked to implement.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1 :
// abcdcba
// Sample Output 1 :
// true
// Sample Input 2:
// coding
// Sample Output 2:
// false

// cpp
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str)
	{
		bool isPalindrome = true;
        for (int i = 0, j = str.length() - 1; i < (str.length() / 2); i++, j--) {
            if (str[i] != str[j]) {
                isPalindrome = false;
                break;
            }
        }
        return isPalindrome;
	}
int main()
{
	string str;
    getline(std::cin, str);
    bool ans = isPalindrome(str);
    cout << boolalpha << ans << endl;
    return 0;
}
// java
// public class Solution {
// 	public static boolean isPalindrome(String str) {
// 		boolean isPalindrome = true;
// 		for(int i = 0,j = str.length() - 1;i < (str.length()/2);i++,j--){
// 		if(str.charAt(i) != str.charAt(j)){
// 		isPalindrome = false;
// 		break;
// 		}
// 		}
// 		return isPalindrome;
// 	}
// }