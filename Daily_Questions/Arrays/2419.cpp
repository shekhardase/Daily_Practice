// https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/submissions/1389432022/?envType=daily-question&envId=2024-09-14
// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int maxi = *max_element(nums.begin(), nums.end());
//         int count = 0;
//         int sizecount = INT_MIN;
//         for (int i = 0; i < nums.size(); i++) {
//             if(nums[i]==maxi)
//             {
//                 count++;
//                 sizecount = max(count , sizecount);

//             }
//             else{
//                 count=0;
//             }
//         }
//         return sizecount;
//     }
// };