// Print the following pattern for given number of rows.
// Input format :
// Integer N (Total number of rows)
// Output Format :
// Pattern in N lines
// Sample Input :
//    5
// Sample Output :
//  5432*
//  543*1
//  54*21
//  5*321
//  *4321

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for (int j = n; j > 0; j++)
		{
			if(i == j)
			{
				cout<<"*";
			}
			else
			{
				cout<<j;
			}
			
		}
	}
	return 0;
}

//Solution
// import java.util.Scanner;
// public class runner {

// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
//         int lines = sc.nextInt();
//         for(int i=1 ; i<=lines ; i++){
//             for(int j=lines ; j >= 1 ; j--){
//                 if(j != i)
//                     System.out.print(j);
//                 else
//                     System.out.print("*");
//             }
//             System.out.println("");
//         }

// 	}
// }