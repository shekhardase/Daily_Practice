
// /* by manipulating rows and columns */

// // class Solution {
// // public:
// //     bool searchMatrix(vector<vector<int>>& matrix, int target) {

// //         int row = matrix.size();
// //         int col = matrix[0].size();

// //         int i = 0, j = col - 1;

// //         while (i < row && j >= 0) {
// //             if (matrix[i][j] > target) {
// //                 j--;
// //             } else if (matrix[i][j] < target) {
// //                 i++;
// //             } else {
// //                 return true;
// //             }
// //         }
// //         return false;
// //     }
// // };
// // https://leetcode.com/problems/search-a-2d-matrix/

// /* Using binary search */

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//        int start = 0;
//        int end = row*col -1;
//        int mid = start + (end- start ) /2;

//        while(start<=end)
//        {
//         int element = matrix[mid/col][mid%col];

//         if(element == target)
//         {
//             return 1;
//         }
//         else if(element < target)
//         {
//             start = mid+1;
//         }
//         else{
//             end= mid-1;
//         }
//         mid = start + (end-start)/2;
//        }
//        return 0;
//     }

// };