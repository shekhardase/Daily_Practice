// https://leetcode.com/problems/single-element-in-a-sorted-array/
// class Solution
// {
//     public:
//         int singleNonDuplicate(vector<int> &nums)
//         {

//            	// logic is something related to finding odd even indexing 
//            	// number of element on left or right half of mid 
//             int low = 0, high = nums.size() - 1;

//             while (low < high)
//             {
//                 int mid = low + (high - low) / 2;

//                	// Check if `mid` is part of a pair
//                 if (mid % 2 == 0)
//                 {
//                     if (nums[mid] == nums[mid + 1])
//                         low = mid + 1;	// Move right
//                     else
//                         high = mid;	// Move left
//                 }
//                 else
//                 {
//                     if (nums[mid] == nums[mid - 1])
//                         low = mid + 1;	// Move right
//                     else
//                         high = mid;	// Move left
//                 }
//             }

//             return nums[low];
//         }
// };