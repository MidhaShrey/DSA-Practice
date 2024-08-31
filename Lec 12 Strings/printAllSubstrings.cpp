// Problem statement
// For a given input string(str), write a function to print all the possible substrings.

// Substring
// A substring is a contiguous sequence of characters within a string.
// Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// abc
// Sample Output 1:
// a
// ab
// abc
// b
// bc
// c
//  Sample Input 2:
// co
// Sample Output 2:
// c
// co
// o

// CPP
#include <bits/stdc++.h>
using namespace std;

vector<string> printSubStrings(string str)
{
	// Type 1: Starting from the character at i-th position.
	// int length = str.length();
	// int start, end;
	// for (start = 0; start < length; start++)
	// {
	// 	for (end = start + 1; end <= length; end++)
	// 	{
	// 		cout << str.substr(start,end-start)<<endl;//substr(start,size);
	// 	}
	// }

	// Type 2: Starting by printing from the smallest sized substring to the largest. According to their lengths

	// for (int length = 1; length <= str.length(); length++)// 1-n
	// {
	//     for (int start = 0; start <= str.length() - length; start++)
	//     {
	//         int end = start + length - 1;
	//         cout << str.substr(start, end + 1) << endl;
	//     }
	// }

	// Test
	vector<string> res;
	string m;
	for (int i = 0; i < str.length(); i++)
	{
		// res.push_back(m);
		for (int j = i ; j < str.length(); j++)
		{
			m.push_back(str[j]);
			res.push_back(m);
		}
		m.clear();
	}
	return res;
}

int main()
{
	string str;
	getline(cin, str);
	// printSubStrings(str);
	// for test
	vector<string> res = printSubStrings(str);
	for (auto it = res.begin(); it != res.end(); ++it)
	{
		cout << *it << endl;
	}
	return 0;
}

// Java
// public class Solution {
// 	public static void printSubstrings(String str) {
// 		for(int i=0;i<str.length();i++)
//     {
//         for(int j=i+1;j<=str.length();j++)
//         {
//             System.out.println(str.substring(i,j));
//         }
//     }
// 	}
// }