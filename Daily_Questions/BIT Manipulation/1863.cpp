// // https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/?envType=daily-question&envId=2024-05-20
// class Solution {
// public:
//     int subsetXORSum(vector<int>& nums) {
//         int n = nums.size();
//         int result = 0;

//         // Iterate over all possible subsets using bitwise operations
//         for (int subsetMask = 1; subsetMask < (1 << n); ++subsetMask) {
//             int xorValue = 0;
//             // Compute the XOR value for the current subset
//             for (int i = 0; i < n; ++i) {
//                 if (subsetMask & (1 << i)) {
//                     xorValue ^= nums[i];
//                 }
//             }
//             // Add the XOR value of the current subset to the total sum
//             result += xorValue;
//         }

//         return result;
//     }
// };