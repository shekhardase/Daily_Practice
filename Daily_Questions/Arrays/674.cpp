// https : // leetcode.com/problems/longest-continuous-increasing-subsequence/description/

//         class Solution
// {
// public:
//     int findLengthOfLCIS(vector<int> &nums)
//     {
//         if (nums.empty())
//             return 0;

//         int n = nums.size();
//         int count = 1;
//         int maxi = 1;

//         for (int i = 1; i < n; i++)
//         {
//             if (nums[i] > nums[i - 1])
//             {
//                 count++;
//             }
//             else
//             {
//                 maxi = max(count, maxi);
//                 count = 1;
//             }
//         }
//         // Update maxi for the last increasing subsequence
//         maxi = max(count, maxi);

//         return maxi;
//     }
// };
