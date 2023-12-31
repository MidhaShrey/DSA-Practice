// Odd Square
// i/p n= 3
// o/p
// 135
// 351
// 513

// Hint:
// import java.util.Scanner;
// public class Main {
	
// 	public static void main(String[] args) {
// 		Scanner scan = new Scanner(System.in);
//         int N=scan.nextInt();
        
//         for(int i=0;i<N;i++)
//         {
//             int val=(2*i)+1;
//             for (int j=0;j<N;j++)
//             {
//                 System.out.print(val);
//                 if (val==(2*N-1))
//                 {
//                     val=1;
//                 }
//                 else
//                 {
//                     val=val+2;
//                 }
//             }
//             System.out.println(" ");
//         }
// 	}
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		int val = (2*i)+1;
		for (int j = 0; j < n; j++)
		{
			cout<<val;
			if (val == 2*n-1)
			{
				val = 1;
			}
			else
			{
				val = val+2;
			}
		}
		cout<<endl;
	}
	return 0;
}