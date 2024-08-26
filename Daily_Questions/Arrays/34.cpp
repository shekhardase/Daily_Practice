// #include <algorithm>
// #include <vector>

// class Solution {
// public:
//     vector<int> searchRange(std::vector<int>& nums, int target) {
//         vector<int> result(2, -1);

//         // Find the first occurrence of the target
//         auto lb = lower_bound(nums.begin(), nums.end(), target);

//         // Check if the target is present
//         if (lb == nums.end() || *lb != target) {
//             return result; // target is not present
//         }

//         // Target is present
//         result[0] = lb - nums.begin(); // first occurrence

//         // Find the last occurrence by using upper_bound and subtracting one
//         auto ub = upper_bound(nums.begin(), nums.end(), target);
//         result[1] = ub - nums.begin() - 1; // last occurrence

//         return result;
//     }
// };

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 