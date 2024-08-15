// https://leetcode.com/problems/binary-search/submissions/1356243562/

// class Solution {

//     public int search(int[] nums, int target) {
//         int start = 0;
//         int end = nums.length- 1;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if(nums[mid] == target)
//             {
//                 return mid;
//             }
//             else if(nums[mid] > target)
//             {
//                 end = mid -  1;
//             }
//             else{
//                 start = mid + 1;
//             }
//             mid = start + (end-start) /2;

//         }
//         return -1;
//     }
// }
