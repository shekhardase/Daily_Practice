// // https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         sort(nums.begin() , nums.end());

//         int last = nums[nums.size() - 1 ];
//         int second_last = nums[nums.size() -2];

//         return ((last-1) * (second_last-1)) ;
//     }
// };