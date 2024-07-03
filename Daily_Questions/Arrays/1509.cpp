// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/?envType=daily-question&envId=2024-07-03

// class Solution {
// public:
//     int minDifference(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         int n = nums.size();
//         if(n<=4)
//         {
//             return 0;
//         }
//         // int maxo  = nums[n-1];
//         // for (int i = n; i >= n-3; i--) {
//         //     nums[i] = nums[i] - maxo;
//         // }

//         // for(int i = 0 ; i< n ; i++)
//         // {
//         //     cout<<nums[i]<<" ";
//         // }

//         int mini = INT_MAX;
//         mini = min({
//             nums[n-1]-nums[3],
//             nums[n-2]-nums[2],
//             nums[n-3]-nums[1],
//             nums[n-4]-nums[0]
//         });
//         return mini ;
//     }
// };