// https://leetcode.com/problems/score-after-flipping-matrix/description/

// class Solution
// {
//     public:
//         int matrixScore(vector<vector < int>> &grid)
//         {
//             int m = grid.size();
//             int n = grid[0].size();

//            	// set first column value in each row

//            	// making MSB 0 to 1 for col

//             for (int i = 0; i < m; i++)
//             {
//                 if (grid[i][0] == 0)
//                 {
//                    	// flip it

//                     for (int j = 0; j < n; j++)
//                     {
//                        	// flipping whole col
//                         grid[i][j] = 1 - grid[i][j];
//                     }
//                 }
//             }

//            	// checking if count of zero is more than one in each row 
//             for (int j = 1; j < n; j++)
//             {
//                 int countZero = 0;
//                 for (int i = 0; i < m; i++)
//                 {
//                     if (grid[i][j] == 0)
//                     {
//                         countZero++;
//                     }
//                 }
//                 int countOne = m - countZero;

//                	// if yes flip the row to make countOne more
//                 if (countZero > countOne)
//                 {
//                     for (int i = 0; i < m; i++)
//                     {
//                         grid[i][j] = 1 - grid[i][j];
//                     }
//                 }
//             }

//            	// finally finding score for each row

//            	// we have to traverse each grid box
//             int score = 0;
//             for (int i = 0; i < m; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     int value = grid[i][j] *pow(2, n - j - 1);

//                     score = score + value;
//                 }
//             }
//             return score;
//         }
// };