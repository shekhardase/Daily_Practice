// https : // leetcode.com/problems/sort-colors/description/?envType=daily-question&envId=2024-06-12

//         class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         // Dutch national flag problem (red, white, blue)
//         const char red = 0,
//                    white = 1,
//                    blue = 2;
//         int l = 0, m = 0, r = nums.size() - 1; // pointers to partition
//         while (m <= r)
//         {
//             switch (nums[m])
//             {
//             case red:
//                 swap(nums[l], nums[m]);
//                 l++, m++;
//                 break;
//             case white:
//                 m++;
//                 break;
//             case blue:
//                 swap(nums[m], nums[r]);
//                 r--;
//             }
//         }
//     }
// };