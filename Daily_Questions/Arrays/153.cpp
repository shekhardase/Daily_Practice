// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1364367889/
// class Solution
// {
//     public:
//         int findMin(vector<int> &nums)
//         {
//             int mini = INT_MAX;

//             int start = 0;
//             int end = nums.size() - 1;

//             while (start <= end)
//             {
//                 int mid = start + (end - start) / 2;

//                	// If the left side is sorted
//                 if (nums[start] <= nums[mid])
//                 {
//                    	// Update the minimum with the start element
//                     mini = min(mini, nums[start]);
//                    	// Move to the right part
//                     start = mid + 1;
//                 }
//                 else
//                 {
//                    	// If the right side is sorted or pivot point is in the left part
//                    	// Update the minimum with the mid element
//                     mini = min(mini, nums[mid]);
//                    	// Move to the left part
//                     end = mid - 1;
//                 }
//             }

//             return mini;
//         }
// };