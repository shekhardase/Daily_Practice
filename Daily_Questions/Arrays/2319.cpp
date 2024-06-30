// class Solution {
// public:
//     bool checkXMatrix(vector<vector<int>>& grid) {
//         int n = grid.size();

//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 // Check the primary diagonal (i == j) and the secondary diagonal (i == n - j - 1)
//                 if (i == j || i == n - j - 1) {
//                     if (grid[i][j] == 0) {
//                         return false;
//                     }
//                 } else {
//                     if (grid[i][j] != 0) {
//                         return false;
//                     }
//                 }
//             }
//         }

//         return true;
//     }
// };
// https://leetcode.com/problems/check-if-matrix-is-x-matrix/description/