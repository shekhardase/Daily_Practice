// https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/

// class Solution {
// public:
//     int findFinalValue(vector<int>& nums, int original) {
//        sort(nums.begin()  , nums.end());
//         for(int num : nums)
//         {
//             if(num==original)
//             {
//                 original *=2;
//             }
//         }
//         return original;
//     }
// };