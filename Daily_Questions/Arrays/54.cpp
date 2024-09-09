// https://leetcode.com/problems/spiral-matrix/submissions/1383917012/

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int total = row * col;
//         int count = 0;
//         int startingRow = 0;
//         int startingCol = 0;
//         int endRow = row - 1;
//         int endCol = col - 1;
//         vector<int> ans;

//         while (count < total) {
//             for (int i = startingCol; count < total && i <= endCol; i++) {
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;
//             }
//             startingRow++;

//             for (int i = startingRow; count < total && i <= endRow; i++) {
//                 ans.push_back(matrix[i][endCol]);
//                 count++;
//             }
//             endCol--;

//             for (int i = endCol; count < total && i >= startingCol; i--) {
//                 ans.push_back(matrix[endRow][i]);
//                 count++;
//             }
//             endRow--;

//             for (int i = endRow; count < total && i >= startingRow; i--) {
//                 ans.push_back(matrix[i][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }
// };