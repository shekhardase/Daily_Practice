// https://leetcode.com/problems/spiral-matrix-ii/submissions/1383939872/

// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         int total = n*n;

//         int firstRow = 0;
//         int lastRow = n-1;
//         int firstCol = 0;
//         int lastCol = n-1;

//         int count = 1;
//         vector<vector<int>> matrix(n, vector<int>(n, 0));
//         while (count <= total) {
//             for (int i=firstCol; count <= total && i<=lastCol; i++) {
//                 matrix[firstRow][i] = count;
//                 count++;
//             }
//             firstRow++;

//             for (int i=firstRow; count <= total && i<=lastRow; i++) {
//                 matrix[i][lastCol] = count;
//                 count++;
//             }
//             lastCol--;

//             for (int i=lastCol; count <= total && i>=firstCol; i--) {
//                 matrix[lastRow][i] = count;
//                 count++;
//             }
//             lastRow--;

//             for (int i=lastRow; count <= total && i>=firstRow; i--) {
//                 matrix[i][firstCol] = count;
//                 count++;
//             }
//             firstCol++;
//         }

//         return matrix;
//     }
// };