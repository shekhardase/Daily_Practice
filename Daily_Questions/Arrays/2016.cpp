// https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/
// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//        if (nums.empty())
//         {
//             return 0;
//         }

//         int minPrice = nums[0];
//         int maxProfit = -1;

//         for (int i = 1; i < nums.size(); i++)
//         {
//             int currentProfit = nums[i] - minPrice;
//             maxProfit = max(maxProfit, currentProfit);
//             minPrice = min(minPrice, nums[i]);
//         }
//         if(maxProfit == 0)
//         {
//             return -1;
//         }
//         return maxProfit;
//     }
// };