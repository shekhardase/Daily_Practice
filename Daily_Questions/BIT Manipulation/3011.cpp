// https://leetcode.com/problems/find-if-array-can-be-sorted/description/?envType=daily-question&envId=2024-11-06

// class Solution {
// public:
//     bool canSortArray(vector<int>& nums) {

//         // for (int i = 0; i < nums.size(); i++)
//         // {
//         //     for (int j = 0; j < nums.size() - 1 - i; j++)
//         //     {
//         //         if (nums[j] > nums[j + 1])
//         //         {
//         //             if (__builtin_popcount(nums[j]) ==
//         //             __builtin_popcount(nums[j + 1]))
//         //             {
//         //                 swap(nums[j], nums[j+1]);
//         //             }
//         //             else{
//         //                 return false;
//         //             }

//         //         }
//         //     }
//         // }

//         // for (int i = 0; i < nums.size(); i++)
//         // {
//         //     cout << nums[i] << " ";
//         // }
//         // return true;

//         vector<int> count;
//         for (int i = 0; i < nums.size(); i++) {
//             count.push_back(__builtin_popcount(nums[i]));
//         }

//         int prev_large = 0;
//         int start = 0;

//         while (start < nums.size()) {
//             int current_small = INT_MAX;
//             int current_long = INT_MIN;

//             int current = count[start];
//             while (start < nums.size() && current == count[start]) {
//                 current_small = min(current_small, nums[start]);
//                 current_long = max(current_long, nums[start]);
//                 start++;
//             }
//             // cout << current_small << " " << current_long << endl;
//             if(prev_large < current_small)
//             {
//                 prev_large = current_long;
//             }
//             else{
//                 return false;
//             }
            
//         }
//         return true;
//     }
// };