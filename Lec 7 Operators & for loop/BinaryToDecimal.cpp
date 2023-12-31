#include <bits/stdc++.h>
using namespace std;

int toDecimal(int n)
{
	int num = 0, base = 1;
	while (n > 0)
	{
		int rem = n % 10;
		num += rem * base;
		n /= 10;
		base *= 2;
	}
	return num;
}

int main()
{
	int n;
	cin >> n;
	cout << toDecimal(n);
	return 0;
}

// import java.util.Scanner;
// public class Main {

// 		static int revers(int n)
//     {
//         int rn = 0;
//         while(n > 0)
//         {
//             rn = rn * 10 + n% 10;

//             n = n/ 10;
//         }
//         return rn;
//     }

//     public static void main (String[] args)
//     {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         System.out.println(revers(n));
//     }
// 	}