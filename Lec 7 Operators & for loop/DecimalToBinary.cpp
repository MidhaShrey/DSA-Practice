#include <bits/stdc++.h>
using namespace std;

void toBinary(int n)
{
	int binaryNumber[32];

	if (n == 0)
	{
		cout<<"0";
	}

	int i = 0;
	while (n > 0)
	{
		binaryNumber[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		cout << binaryNumber[j];
	}
}

int main()
{
	int n;
	cin >> n;
	toBinary(n);
	return 0;
}

// Code:
// import java.util.Scanner;

// public class Main {
// 	public void Binary(int num){
//     if (num==0)
//     {
//         System.out.print("0");
//         return;
//     }
//      int binary[] = new int[40];
//      int index = 0;
//      while(num > 0){
//        binary[index++] = num%2;
//        num = num/2;
//      }
//      for(int i = index-1;i >= 0;i--){
//        System.out.print(binary[i]);
//      }
//   }

//   public static void main(String a[]){
//       Scanner sc=new Scanner(System.in);
//       Main obj = new Main();
//       int n=sc.nextInt();
//          obj.Binary(n);
//   }
// }
