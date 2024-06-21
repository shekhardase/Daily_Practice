// https://leetcode.com/problems/smallest-index-with-equal-value/

// class Solution
// {
//     public:
//         int smallestEqual(vector<int> &nums)
//         {
//             int mini = INT_MAX;
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 if (i % 10 == nums[i])
//                 {
//                     mini = min(mini, i);
//                 }
//             }
//             if (mini == INT_MAX)
//             {
//                 return -1;
//             }
//             else
//             {
//                 return mini;
//             }
//         }
// };