// https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/solutions/5258466/cpp-easyy/

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         int n = nums.size();
//         if (n % 2 != 0) {
//             n--;
//         }
//         int i = 0;

//         while (i < n) {
//             swap(nums[i], nums[i + 1]);
//             i = i + 2;
//         }
//         return nums;
//     }
// };