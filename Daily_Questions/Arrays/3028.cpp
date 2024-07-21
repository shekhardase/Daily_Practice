// https : // leetcode.com/problems/ant-on-the-boundary/description/

//         class Solution
// {
// public:
//     int returnToBoundaryCount(vector<int> &nums)
//     {
//         int countleft = 0;
//         int count = 0;
//         int countright = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] < 0)
//             {
//                 countleft = countleft + nums[i];
//             }
//             if (nums[i] > 0)
//             {
//                 countright = countright + nums[i];
//             }

//             if (abs(countleft) == abs(countright))
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };