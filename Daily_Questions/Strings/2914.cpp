// https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/?envType=daily-question&envId=2024-11-05

// class Solution {
// public:
//     int minChanges(string s) {
//         int count = 0;
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] != s[i + 1]) {
//                 count++;
//             }
//             i++;
//         }
//         return count ;
//     }

// };