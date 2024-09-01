// class Solution {
// public:
//     vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//         // Check if the 1D array can be exactly converted to m * n 2D array
//         if (original.size() != m * n) {
//             return {}; // return an empty 2D array
//         }

//         vector<vector<int>> temp(m, vector<int>(n)); // Create a 2D array with m rows and n columns
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 temp[i][j] = original[i * n + j]; // Map 1D array elements to 2D array
//             }
//         }

//         return temp;
//     }
// };
// https://leetcode.com/problems/convert-1d-array-into-2d-array/description/?envType=daily-question&envId=2024-09-01