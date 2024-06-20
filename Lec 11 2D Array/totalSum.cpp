// Total Sum on the Boundaries & Diagonals
// Problem statement
// For a given two-dimensional square matrix of size (N x N). Find the total sum of elements on both the diagonals and at all the four boundaries.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1sec
// Sample input 1:
// 1
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 1:
// 45
// Explanation for Sample Output 1:
// The boundary elements are 1, 2, 3, 6, 9, 8, 7 and 4. 

// The first-diagonal elements are 1, 5 and 9. 

// The second-diagonal elements are 3, 5 and 7.

// We just need to add all these numbers making sure that no number is added twice. For example, '1' is both a boundary element and a first-diagonal element similarly, '5' contributes to both the diagonals but they won't be added twice.

// Hence, we add up, [1 + 2 + 3 + 6 + 9 + 8 + 7 + 4 + 5] to give 45 as the output.
// Sample input 2:
// 2
// 5
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// 4
// 1 2 3 10
// 4 5 6 11
// 7 8 9 12
// 13 14 15 16
// Sample Output 2:
// 273
// 136

// CPP


// Java
// public class Solution {
// 	public static void totalSum(int[][] matrix) {
// 	    try {
//             int numRows = matrix.length;
//             int numCols = matrix[0].length;
//             int sum = 0;
//             if (numRows % 2 == 0) {
//                 for (int i = 0; i < numRows; i++) {
//                     for (int j = 0; j < numCols; j++) {
//                         if (i == 0 || j == 0 || i == numRows - 1 || j == numCols - 1)
//                             sum += matrix[i][j];
//                     }
//                 }
//                 int Pd = 0, Sd = 0, N = matrix.length;
//                 for (int k = 1; k < N - 1; k++) {
//                     for (int l = 1; l < N - 1; l++) {
//                         if (k == l)
//                             Pd += matrix[k][l];
//                         if ((k + l) == (N - 1))
//                             Sd += matrix[k][l];
//                     }
//                 }
//                 System.out.println(sum + Pd + Sd);
//             } else {
//                 for (int i = 0; i < numRows; i++) {
//                     for (int j = 0; j < numCols; j++) {
//                         if (i == 0 || j == 0 || i == numRows - 1 || j == numCols - 1)
//                             sum += matrix[i][j];
//                     }
//                 }
//                 int Pd = 0, Sd = 0, N = matrix.length;
//                 for (int k = 1; k < N - 1; k++) {
//                     for (int l = 1; l < N - 1; l++) {
//                         if (k == l)
//                             Pd += matrix[k][l];
//                         if ((k + l) == (N - 1))
//                             Sd += matrix[k][l];
//                     }
//                 }
//                 int a = numRows / 2;
//                 System.out.println(sum + Pd + Sd - matrix[a][a]);
//             }

//         } catch (ArrayIndexOutOfBoundsException e) {
//             System.out.println("0");
//         }
// 	}
// }