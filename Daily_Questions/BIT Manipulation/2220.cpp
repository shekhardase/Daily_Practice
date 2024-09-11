// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/?envType=daily-question&envId=2024-09-11

// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
//         int ans = 0;
//         while (start != 0 || goal != 0) {
//             if ((start & 1) != (goal & 1))
//             {
//                 ans++;
//             }
//             start = start >> 1;
//             goal = goal >> 1;
//         }
//         return ans;
//     }
// };