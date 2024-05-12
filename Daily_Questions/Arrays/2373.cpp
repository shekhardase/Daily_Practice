// // https://leetcode.com/problems/largest-local-values-in-a-matrix/description/?envType=daily-question&envId=2024-05-12

// #include <vector>
// using namespace std;

// class Solution
// {
//     public:
//         vector<vector < int>> largestLocal(vector<vector < int>> &grid)
//         {
//             int n = grid.size();
//             vector<vector < int>> maxLocalMatrix(n - 2, vector<int> (n - 2, 0));	// Initialize maxLocal matrix

//            	// Iterate through the grid excluding the border elements
//             for (int i = 1; i < n - 1; ++i)
//             {
//                 for (int j = 1; j < n - 1; ++j)
//                 {
//                     int maxVal = grid[i - 1][j - 1];	// Initialize maxVal with top-left element of the 3x3 submatrix

//                    	// Iterate over the 3x3 submatrix and find the maximum value
//                     for (int x = i - 1; x <= i + 1; ++x)
//                     {
//                         for (int y = j - 1; y <= j + 1; ++y)
//                         {
//                             maxVal = max(maxVal, grid[x][y]);
//                         }
//                     }

//                    	// Store the maximum value in maxLocal matrix
//                     maxLocalMatrix[i - 1][j - 1] = maxVal;
//                 }
//             }

//             return maxLocalMatrix;
//         }
// };