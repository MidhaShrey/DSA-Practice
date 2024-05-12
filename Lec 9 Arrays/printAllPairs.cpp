#include <bits/stdc++.h>
using namespace std;

void printAllPairs(int ar[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			cout << "(" << ar[i] << "," << ar[j] << ")" << endl;
		}
	}
}

int main()
{
	int ar[] = {1, 4, 7, 6, 5};
	int size = sizeof(ar) / sizeof(ar[0]);
	printAllPairs(ar, size);
	return 0;
}

// Solution
// import java.util.Scanner;
// public class PrintAllPairs {
// public static void printAllPairs(int[] arr){
//     int n=arr.length;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             System.out.println("("+arr[i]+","+arr[j]+")");
//         }
//     }
// }

// public static void main(String args[]) {
//     int[] arr={1,4,7,6,5};
//     printAllPairs(arr);
//     }
// }