// Problem statement
// For a given input string(str), find and return the total number of words present in it.

// It is assumed that two words will have only a single space in between. Also, there wouldn't be any leading and trailing spaces in the given input string.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 sec
// Sample Input 1:
// Coding Ninjas!
// Sample Output 1:
// 2
// Sample Input 2:
// this is a sample string
// Sample Output 2:
// 5

// CPP
#include <bits/stdc++.h>
using namespace std;

int countWords(string str)
{
	int count = 0;
	int len = str.length();

	// Handle the case when the input string is empty
	if (len == 0)
	{
		return 0;
	}

	// Check if the first character is not a space
	if (str[0] != ' ')
	{
		count = 1; // Initialize the count to 1 if the first character is not a space
	}

	// Iterate through the string to count the words
	for (int i = 1; i < len; i++)
	{
		// Check if the current character is not a space and the previous character is a space
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			count++; // Increment the count if a non-space character is encountered after a space
		}
	}

	return count; // Return the total number of words in the given string
}

int main()
{
	string str;
	getline(cin, str);
	if (str.empty())
	{
		str = "";
	}
	int count = countWords(str);
	cout << count;
	return 0;
}

// Java
// public class Solution {
// 	public static int countWords(String str) {
// 		int noofwords = 1;
//         if(str.length() == 0){
//             return 0 ;
//         }
//         for(int i =0 ; i<= str.length()-1 ; i++) {
//             if(str.charAt(i) == ' '){
//                 noofwords++;
//             }
//         }return noofwords;
// 	}
// }

// import java.util.Scanner;
// public class Runner {
// 	public static void main(String[] args) {
// 		Scanner sr= new Scanner(System.in);
// 		String str = sr.nextLine();
// 		if(str==null)
// 		{
// 			str="";
// 		}
// 		int count = Solution.countWords(str);
// 		System.out.println(count);
// 	}
// }