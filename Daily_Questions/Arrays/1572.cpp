// https://leetcode.com/problems/matrix-diagonal-sum/description/

// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (i == j && i == n - j - 1) {
//                     sum = sum + matrix[i][j];
//                 } else if (i == j) {
//                     sum = sum + matrix[i][j];
//                 } else if (i == n - j - 1) {
//                     sum = sum + matrix[i][j];
//                 }
//             }
//         }
//         return sum;
//     }
// };