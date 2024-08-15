// public class Solution {
// public boolean searchMatrix(int[][] matrix, int target) {

// int row = matrix.length;
// int col = matrix[0].length;

// int start = 0 ;
// int end = row * col -1;

// int mid = start+(end-start) /2;

// while(start<=end)
// {
// int element = matrix[mid/col][mid%col];

// if(element<target)
// {
// start = mid+1;
// }
// else if(element>target)
// {
// end= mid-1;
// }
// else{
// return true;
// }
// mid = start+(end-start)/2;
// }
// return false;
// }
// } {

// }
// https://leetcode.com/problems/search-a-2d-matrix/