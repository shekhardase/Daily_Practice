// // https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-02


// class Solution
// {
//     public:
//         int findMaxK(vector<int> &nums)
//         {
//             sort(nums.begin(), nums.end());
//             int start = 0;
//             int end = nums.size() - 1;

//             while (nums[start] < 0 && start < end)
//             {
//                 if (abs(nums[start]) == nums[end])
//                 {
//                     return nums[end];
//                 }
//                 if (nums[end] < abs(nums[start]))
//                 {
//                    start++;
//                 }
//                 else{
//                      end--;
//                 }
               
//             }
//             return -1;
//         }
// };