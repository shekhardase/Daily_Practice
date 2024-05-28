// // https://leetcode.com/problems/get-equal-substrings-within-budget/description/

// class Solution {
// public:
//     int equalSubstring(string s, string t, int maxCost) {
//         int n = s.length();
//         int i = 0;
//         int j = 0;
//         int cost = 0;
//         int ans = 0;
//         while (j < n) {
//             cost = cost + abs(s[j] - t[j]);
//             while (i <= j && cost > maxCost) {
//                 cost = cost - abs(s[i] - t[i]);
//                 i++;
//             }
//             ans = max(ans, j - i + 1);
//             j++;
//         }
//         return ans;
//     }
// };