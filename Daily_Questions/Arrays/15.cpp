// https://leetcode.com/problems/3sum/description/

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> result;
//         sort(nums.begin(), nums.end());

//         // We need to find three numbers a, b, and c such that a + b + c = 0.
//         // We can rephrase this as finding two numbers b and c such that b + c =
//         // -a.

//         for (int i = 0; i < nums.size(); i++) {
//             if (i > 0 && nums[i] == nums[i - 1]) {
//                 // Skip duplicates to avoid duplicate triplets in the result
//                 continue;
//             }
//             int target = -nums[i];
//             int left = i + 1;
//             int right = nums.size() - 1;

//             while (left < right) {
//                 int sum = nums[left] + nums[right];
//                 if (sum < target) {
//                     // If the sum is less than the target, move the left pointer
//                     // to the right
//                     left++;
//                 } else if (sum > target) {
//                     // If the sum is greater than the target, move the right
//                     // pointer to the left
//                     right--;
//                 } else {
//                     // If the sum is equal to the target, we found a triplet
//                     result.push_back({nums[i], nums[left], nums[right]});
//                     // Skip duplicates for the left pointer
//                     while (left < right && nums[left] == nums[left + 1]) {
//                         left++;
//                     }
//                     // Skip duplicates for the right pointer
//                     while (left < right && nums[right] == nums[right - 1]) {
//                         right--;
//                     }
//                     // Move both pointers after recording the valid triplet
//                     left++;
//                     right--;
//                 }
//             }
//         }

//         return result;
//     }
// };
