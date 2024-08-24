// https://leetcode.com/problems/find-the-peaks/submissions/1366986713/

// class Solution {
// public:
//     vector<int> findPeaks(vector<int>& nums) {
//         vector<int> temp;
//         for (int i = 1; i < nums.size() - 1; i++) {
//             if(nums[i]>nums[i-1] && nums[i]> nums[i+1])
//             {
//                 temp.push_back(i);
//             }
//         }
//         return temp;
//     }
// };