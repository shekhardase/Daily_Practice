// https://leetcode.com/problems/house-robber-iv/description/?envType=daily-question&envId=2025-03-15
// class Solution
// {
//     public:
//         bool canRob(vector<int> &nums, int k, int capacity)
//         {
//             int count = 0;
//             int i = 0;
//             while (i < nums.size())
//             {
//                 if (nums[i] <= capacity)
//                 {
//                     count++;
//                     i = i + 2;
//                 }
//                 else
//                 {
//                     i++;
//                 }
//                 if (count >= k)
//                 {
//                     return true;
//                 }
//             }
//             return false;
//         }

//     int minCapability(vector<int> &nums, int k)
//     {
//         int start = *min_element(nums.begin(), nums.end());
//         int end = *max_element(nums.begin(), nums.end());

//         long long result = end;

//         while (start <= end)
//         {
//             int mid = start + (end - start) / 2;

//             if (canRob(nums, k, mid))
//             {
//                 result = mid;
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }
//         return result;
//     }
// };