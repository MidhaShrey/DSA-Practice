// Sum Pattern
// 1=1
// 1+2=3
// 1+2+3=6
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	outer_loop:for (int i = 1; i <= n; i++)
	{
		int sum=1;
		if (i == 1)
		{
			cout << "1=1"<<endl;
			continue;
		}
		else
		{
			cout << "1+";
		}
		inner_loop:for (int j = 2; j <= i; j++)
		{
			sum+=j;
			cout<<j;
			if (j<i)
			{
				cout<<"+";
			}
			else
			{
				cout<<"="<<sum;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}

// HINT:
// import java.util.S
// public class Main {
	
// 	public static void main(String[] args) {
// 		 Scanner scan = new Scanner(System.in);
//         int N=scan.nextInt();
        
//         outer_loop:for(int i=1;i<=N;i++)
//         {
//             int sum=1;
//             if (i==1)
//             {
//                 System.out.println("1=1");
//                 continue outer_loop;
//             }
//             else
//             {
//                 System.out.print("1+");
//             }
            
//             inner:for (int j=2;j<=i;j++)
//             {
//                 sum=sum+(j);
//                 System.out.print(j);
//                 if (j<i)
//                 {
//                     System.out.print("+");
//                 }
//                 else
//                 {
//                     System.out.println("="+sum);
//                     break inner;
//                 }
//             }
//         }
// 	}
// }
