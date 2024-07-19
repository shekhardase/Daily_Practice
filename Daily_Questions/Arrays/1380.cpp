// https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/?envType=daily-question&envId=2024-07-19

// class Solution
// {
//     public:
//         vector<int> luckyNumbers(vector<vector < int>> &matrix)
//         {
//             int rows = matrix.size();
//             int cols = matrix[0].size();

//             vector<int> minInRows(rows, INT_MAX);
//             vector<int> maxInCols(cols, INT_MIN);

//            	// Find minimum values in each row
//             for (int i = 0; i < rows; ++i)
//             {
//                 for (int j = 0; j < cols; ++j)
//                 {
//                     minInRows[i] = min(minInRows[i], matrix[i][j]);
//                 }
//             }

//            	// Find maximum values in each column
//             for (int j = 0; j < cols; ++j)
//             {
//                 for (int i = 0; i < rows; ++i)
//                 {
//                     maxInCols[j] = max(maxInCols[j], matrix[i][j]);
//                 }
//             }

//             vector<int> luckyNumbers;
//            	// Check for lucky numbers
//             for (int i = 0; i < rows; ++i)
//             {
//                 for (int j = 0; j < cols; ++j)
//                 {
//                     if (matrix[i][j] == minInRows[i] && matrix[i][j] == maxInCols[j])
//                     {
//                         luckyNumbers.push_back(matrix[i][j]);
//                     }
//                 }
//             }

//             return luckyNumbers;
//         }
// };