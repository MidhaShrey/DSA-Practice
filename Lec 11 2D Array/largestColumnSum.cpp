// C++ without STL

// #include <iostream>

// using namespace std;

// void takeInput(int** arr, int rows, int cols) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << "Enter the element [" << i << "][" << j << "]: ";
//             cin >> arr[i][j];
//         }
//     }
// }

// int largestCol(int** arr, int rows, int cols) {
//     int largest = -2147483648; // assuming int is 32-bit
//     for (int j = 0; j < cols; ++j) {
//         int sum = 0;
//         for (int i = 0; i < rows; ++i) {
//             sum += arr[i][j];
//         }
//         if (sum > largest) {
//             largest = sum;
//         }
//     }
//     return largest;
// }

// int main() {
//     int rows, cols;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     int** arr = new int*[rows];
//     for (int i = 0; i < rows; ++i) {
//         arr[i] = new int[cols];
//     }

//     takeInput(arr, rows, cols);

//     int larColSum = largestCol(arr, rows, cols);
//     cout << "Largest column sum: " << larColSum << endl;

//     // don't forget to free the memory!
//     for (int i = 0; i < rows; ++i) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     return 0;
// }

// CPP
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<vector<int>> takeInput() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter the element at " << i << " row " << j << " column: ";
            cin >> arr[i][j];
        }
    }
    return arr;
}

int largestCol(vector<vector<int>>& arr) {
    int rows = arr.size();
    int cols = arr[0].size();
    int largest = numeric_limits<int>::min();
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        if (sum > largest) {
            largest = sum;
        }
    }
    return largest;
}

int main() {
    vector<vector<int>> arr = takeInput();
    int larColSum = largestCol(arr);
    cout << "Largest column sum: " << larColSum << endl;
    return 0;
}

// import java.util.*;
// public class FunctionWith2darrays {

// public static int[][] takeInput(){
//     Scanner s=new Scanner(System.in);
//     System.out.println("Enter the number of rows");
//     int rows=s.nextInt();
//     System.out.println("Enter number of cols");
//     int cols=s.nextInt();
//     int[][] arr=new int[rows][cols];
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             System.out.println("Enter the element at "+ i+ " row "+j+"column");
//             arr[i][j]=s.nextInt();
//         }
//     }
//     return arr;
// }
//     public static int largestCol(int[][]arr){
//         int rows=arr.length;
//         int cols=arr[0].length;
//         int largest=Integer.MIN_VALUE;
//         for(int j=0;j<cols;j++){
//             int sum=0;
//             for(int i=0;i<rows;i++){
//             sum=sum+arr[i][j];
//         }
//         if(sum>largest){
//             largest=sum;
//         }
        
//     }  
//     return largest;
// }
    
//     public static void main(String args[]) {
//       int [][]arr=takeInput();
//       int larColSum=largestCol(arr);
//       System.out.println(larColSum);
// }

// }