// class Solution {
// public:
//     string makeFancyString(string s) {
//         string ans = "";
//         ans.push_back(s[0]);
//         int n = s.size();
//         int count = 1;

//         for (int i = 1; i < n; i++) {
//             if (s[i] == ans.back()) {
//                 count++;
//                 if (count < 3) {
//                     ans.push_back(s[i]);
//                 }

//             } else {
//                 count = 1;
//                 ans.push_back(s[i]);
//             }
//         }
//         return ans;
//     }
// };

// https://leetcode.com/problems/delete-characters-to-make-fancy-string/?envType=daily-question&envId=2024-11-01