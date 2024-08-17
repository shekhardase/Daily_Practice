// <!-- https://leetcode.com/problems/search-insert-position/

// class Solution
// {
//     public:
//         int searchInsert(vector<int> &nums, int target)
//         {
//             int start = 0;
//             int end = nums.size() - 1;

//             int mid = start + (end - start) / 2;
//             // int index = 0;
//             while (start <= end)
//             {
//                 if (nums[mid] == target)
//                 {
//                     return mid;
//                 }
//                 else if (nums[mid] < target)
//                 {
//                     // index = mid;
//                     start = mid + 1;
//                 }
//                 else
//                 {
//                     end = mid - 1;
//                 }
//                 mid = start +(end-start)/2;
//             }
//             return start;
//         }
// }; -->