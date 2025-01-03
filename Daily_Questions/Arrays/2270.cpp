// https://leetcode.com/problems/number-of-ways-to-split-array/description/?envType=daily-question&envId=2025-01-03
// class Solution {
// public:
//     int waysToSplitArray(vector<int>& nums) {
//         int count = 0 ;
//         long long right = 0 ;
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             right+=nums[i];
//         }
//         long long left = 0 ;
//         for(int i = 0 ; i < nums.size()- 1; i++)
//         {
//             right = right - nums[i];
//             left = left + nums[i];
//             if(left>=right)
//             {
//                 count++;
//             }
//         }
//         return count ;
//     }
// };