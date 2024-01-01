#include <bits/stdc++.h>
using namespace std;

void printDivisionResult(int num, int deno)
{
	if (deno == 0)
	{
		// Exit the function
		cout << "Division by Zero is not allowed";
		return;
	}
	cout << num / deno;
}

int main()
{
	int num = 8, deno = 0;
	return 0;
}


// public class DivideNumbers {
// public static int divideNumbers(int num,int deno){
//     if(deno==0){
//         return Integer.MIN_VALUE;
//     }
//     //System.out.println("Inside division function")
//     return num/deno;
// }
// public static void printDivisionResult(int num,int deno){
//     if(deno==0){
//         //Exit the function
//         System.out.println("Division by Zero is not allowed");
//         return;
//     }
//     System.out.println(num/deno);
// }

// public static void main(String args[]) {
//     int num=8;
//     int deno=0;
//     printDivisionResult(num,deno);
//     int result=divideNumbers(num,deno);
//     if(result>0){
	// if you want to do some work can use the return for further execution
//     }else{
// 
//     }
//     System.out.println(result);
// }
//     }