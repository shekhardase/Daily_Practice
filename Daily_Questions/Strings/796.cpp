// https://leetcode.com/problems/rotate-string/submissions/1441424917/?envType=daily-question&envId=2024-11-03

// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if (s.length() != goal.length()) {
//             return false;
//         }

//         string concatenated = goal + goal;

//         return concatenated.find(s) != string::npos;
//     }
// };