// import java.util.Scanner;
// public class LargestOfNumbers {
//     public static void printArray(int[]arr){
//         int n=arr.length;
//         for(int i=0;i<n;i++){
//             System.out.println(arr[i]);
//         }
//     }
//     public static int[] takeInput(){
//         Scanner s=new Scanner(System.in);
//         int n=s.nextInt();
//         int[]arr=new int[n];
//         for(int i=0;i<n;i++){
//             System.out.println("Enter element at "+i+"th index");
//             arr[i]=s.nextInt();
//         }
//         return arr;
        
//     }
//     public static int largest(int arr[]){
//         int max=Integer.MIN_VALUE;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i]>max){
//                 max=arr[i];
//             }
//         }
//         return max;
//     }
    
    
// public static void main(String args[]) {
//      int[] arr=takeInput();
//      int lar=largest(arr);
//      System.out.println(lar);
//     }
// }

// C++
#include<bits/stdc++.h>
using namespace std;

int *takeInput()
{
	int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return arr;
}

int main()
{
	// int *arr=takeInput();
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	// int i = 0;
	// while (arr[i] != 0)
	// {
	// 	cout<<arr[i]<<" ";
	// 	i++;
	// }
	
	return 0;
}