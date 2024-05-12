// Print the following pattern for given number of rows.

// Input format :

// Line 1 : N (Total number of rows)

// Sample Input :
//    5
// Sample Output :
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin >> n;
	for (int k = n, x = 0; k >= 1; k--, x+=2)
	{
		for (int i = 1; i <= k; i++)
		{
			cout << i;
		}
		for (int l = 1; l <= x; l++)
		{
			cout<<"*";
		}
		
		for (int j = k; j >= 1; j--)
		{
			cout << j;
		}
		cout << endl;
	}

	return 0;
}

// Answer:
// import java.util.Scanner;
// public class Solution {

// 	public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         for(int i=n , x=0 ; i>=1 ; i-- , x +=2){
//             for(int j=1 ; j<= i ; j++){
//                 System.out.print(j);
//             }

//             for(int y=1 ; y<=x ; y++){
//                 System.out.print('*');
//             }

//             for(int k = i ; k >= 1 ; k--){
//                 System.out.print(k);
//             }
//             System.out.println();
//         }
// 	}
// }